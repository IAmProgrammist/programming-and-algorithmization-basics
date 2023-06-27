#include "task10.h"

int main() {
    char name1[] = "фадей";
    char name2[] = "инесса";
    char name3[] = "белла";
    char name4[] = "ибрагим";
    char name5[] = "степан";
    char name6[] = "фадей";
    char name7[] = "инесса";
    char name8[] = "белла";
    char name9[] = "ибрагим";
    char name10[] = "степан";

    char sname1[] = "трифонов";
    char sname2[] = "филатова";
    char sname3[] = "пестова";
    char sname4[] = "пестовааееее";
    char sname5[] = "пестоваб";
    char sname6[] = "богданов";
    char sname7[] = "ё";
    char sname8[] = "ёа";
    char sname9[] = "ёааа";
    char sname10[] = "ёаав";

    char pname1[] = "витальевич";
    char pname2[] = "фомовна";
    char pname3[] = "даниловна";
    char pname4[] = "романович";
    char pname5[] = "игнатович";
    char pname6[] = "витальевич";
    char pname7[] = "фомовна";
    char pname8[] = "даниловна";
    char pname9[] = "романович";
    char pname10[] = "игнатович";

    FullName fNames[] = {
            {name1, sname1, pname1},
            {name2, sname2, pname2},
            {name3, sname3, pname3},
            {name4, sname4, pname4},
            {name5, sname5, pname5},
            {name6, sname6, pname6},
            {name7, sname7, pname7},
            {name8, sname8, pname8},
            {name9, sname9, pname9},
            {name10, sname10, pname10}
    };

    sortBySurname(fNames, 10);

    ASSERT_STRING(fNames[0].name.name, "Фадей");
    ASSERT_STRING(fNames[1].name.name, "Инесса");
    ASSERT_STRING(fNames[2].name.name, "Белла");
    ASSERT_STRING(fNames[3].name.name, "Ибрагим");
    ASSERT_STRING(fNames[4].name.name, "Степан");
    ASSERT_STRING(fNames[5].name.name, "Белла");
    ASSERT_STRING(fNames[6].name.name, "Ибрагим");
    ASSERT_STRING(fNames[7].name.name, "Степан");
    ASSERT_STRING(fNames[8].name.name, "Фадей");
    ASSERT_STRING(fNames[9].name.name, "Инесса");

    ASSERT_STRING(fNames[0].surname.name, "Богданов");
    ASSERT_STRING(fNames[1].surname.name, "Ë");
    ASSERT_STRING(fNames[2].surname.name, "Ëа");
    ASSERT_STRING(fNames[3].surname.name, "Ëааа");
    ASSERT_STRING(fNames[4].surname.name, "Ëаав");
    ASSERT_STRING(fNames[5].surname.name, "Пестова");
    ASSERT_STRING(fNames[6].surname.name, "Пестовааееее");
    ASSERT_STRING(fNames[7].surname.name, "Пестоваб");
    ASSERT_STRING(fNames[8].surname.name, "Трифонов");
    ASSERT_STRING(fNames[9].surname.name, "Филатова");

    ASSERT_STRING(fNames[0].patronymic.name, "Витальевич");
    ASSERT_STRING(fNames[1].patronymic.name, "Фомовна");
    ASSERT_STRING(fNames[2].patronymic.name, "Даниловна");
    ASSERT_STRING(fNames[3].patronymic.name, "Романович");
    ASSERT_STRING(fNames[4].patronymic.name, "Игнатович");
    ASSERT_STRING(fNames[5].patronymic.name, "Даниловна");
    ASSERT_STRING(fNames[6].patronymic.name, "Романович");
    ASSERT_STRING(fNames[7].patronymic.name, "Игнатович");
    ASSERT_STRING(fNames[8].patronymic.name, "Витальевич");
    ASSERT_STRING(fNames[9].patronymic.name, "Фомовна");
}