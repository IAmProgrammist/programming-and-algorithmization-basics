#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include "Tasks.h"

// beg содержит ссылку на русский символ в кодировке UTF-8
static uint16_t getRuCode(uint8_t *beg) {
    // Русский символ в UTF-8 состоит из двух байтов, поэтому сохраняем результат в двухбайтовый беззнаковый тип.
    return (((uint16_t) beg[0]) << 8) + ((uint16_t) beg[1]);
}

// beg содержит ссылку на русский символ в кодировке UTF-8
static void writeRuCodeToChar(uint16_t code, char *beg) {
    // Русский символ в UTF-8 состоит из двух байтов, поэтому просто копируем их
    beg[0] = (code & 0xFF00) >> 8;
    beg[1] = code & 0x00FF;
}

static void firstLetterToupperRu(char *beg) {
    uint16_t code = getRuCode(beg);

    // Отдельная проверка для ё, потому что она совсем в другом месте в таблице UTF-8
    if (code == getRuCode("ё"))
        writeRuCodeToChar(getRuCode("Ë"), beg);
    // Проверка для а-п, их коды: 0xD0B0 - 0xD0BF
    else if (code >= getRuCode("а") && code <= getRuCode("п"))
        writeRuCodeToChar(code - (getRuCode("а") - getRuCode("А")), beg);
    // Почему-то между п и р большой пробел, причём только для прописных букв.
    // Поэтому выполняем отдельную проверку для них. Границы р-я: 0xD1080 - 0xD18F
    else if (code >= getRuCode("р") && code <= getRuCode("я"))
        writeRuCodeToChar(code - (getRuCode("р") - getRuCode("Р")), beg);
}

void validateProperName(ProperName name) {
    // Делаем первый символ имени заглавным
    firstLetterToupperRu(name.name);
}

void validateFullName(FullName fullName) {
    // Проверяем имя, фамилию и отчество на валидность
    validateProperName(fullName.name);
    validateProperName(fullName.surname);
    validateProperName(fullName.patronymic);
}

// Приоритет русских символов
int getRuPriority(char *a) {
    // Если хоть один из символов ноль-символ - возвращаем 0. Для удобства работы с аналогом strcmp.
    if (!*a || !a[1]) return 0;

    // Получаем код символа
    uint16_t aCode = getRuCode(a);

    if (aCode >= getRuCode("А") && aCode <= getRuCode("Е"))
        return aCode - getRuCode("А") + 1;
    else if (aCode == getRuCode("Ë"))
        return 7;
    else if (aCode >= getRuCode("Ж") && aCode <= getRuCode("Я"))
        return aCode - getRuCode("Ж") + 8;
    else if (aCode >= getRuCode("а") && aCode <= getRuCode("е"))
        return aCode - getRuCode("а") + 34;
    else if (aCode == getRuCode("ё"))
        return 40;
    else if (aCode >= getRuCode("ж") && aCode <= getRuCode("п"))
        return aCode - getRuCode("ж") + 41;
    else if (aCode >= getRuCode("р") && aCode <= getRuCode("я"))
        return aCode - getRuCode("р") + 51;

    // Если получить приоритет не удалось - ставим символ в самую последнюю очередь.
    return 67;
}

// Замена strcmp, но для русских символов в UTF-8
static int fullNameComparator(const void *a, const void *b) {
    unsigned char* aNameSurname = (*(FullName *) a).surname.name;
    unsigned char* bNameSurname = (*(FullName *) b).surname.name;

    int aNameCode = getRuPriority(aNameSurname);
    int bNameCode = getRuPriority(bNameSurname);
    while (aNameCode && bNameCode && aNameCode == bNameCode) {
        aNameSurname++;
        bNameSurname++;

        aNameCode = getRuPriority(aNameSurname);
        bNameCode = getRuPriority(bNameSurname);
    }

    return aNameCode - bNameCode;
}

// Так как кодировка в задании не была уточнена, реализовал алгоритм для кодировки UTF-8.
// получилось "самую капельку" сложнее, зато интереснее.
void sortBySurname(FullName *namesList, int size) {
    for (int i = 0; i < size; i++)
        validateFullName(namesList[i]);

    qsort(namesList, size, sizeof(FullName), fullNameComparator);
}

// Пример использования
int main() {
    // Кодировка консоли UTF-8
    system("chcp 65001");

    // Файл в кодировке UTF-8, поэтому ФИО ниже таакже создаются в UTF-8, значит сортировка будет работать.

    char name1[] = "фадей";
    char name2[] = "инесса";
    char name3[] = "белла";
    char name4[] = "ибрагим";
    char name5[] = "степан";

    char sname1[] = "трифонов";
    char sname2[] = "филатова";
    char sname3[] = "пестова";
    char sname4[] = "богданов";
    char sname5[] = "ё";

    char pname1[] = "витальевич";
    char pname2[] = "фомовна";
    char pname3[] = "даниловна";
    char pname4[] = "романович";
    char pname5[] = "игнатович";

    FullName fNames[] = {
            {name1, sname1, pname1},
            {name2, sname2, pname2},
            {name3, sname3, pname3},
            {name4, sname4, pname4},
            {name5, sname5, pname5}
    };

    sortBySurname(fNames, 5);

    for (int i = 0; i < 5; i++)
        printf("%s %s %s\n", fNames[i].surname.name, fNames[i].name.name, fNames[i].patronymic.name);
}