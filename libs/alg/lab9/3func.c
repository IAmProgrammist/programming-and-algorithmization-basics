#include "../alg.h"

// возвращает "истина" если массив упорядочен по невозрастанию или неубыванию, иначе - "ложь"
bool isSorted(const int * const array, size_t arraySize) {
    return isSortedNotDec(array, arraySize) || isSortedNotInc(array, arraySize);
}

// возвращает "истина" если массив упорядочен по неубыванию, иначе - "ложь"
bool isSortedNotDec(const int * const array, size_t arraySize) {
    for (size_t i = 0; i < arraySize - 1; i++)
        if (array[i] > array[i + 1])
            return false;

    return true;
}

// возвращает "истина" если массив упорядочен по невозрастанию, иначе - "ложь"
bool isSortedNotInc(const int * const array, size_t arraySize) {
    for (size_t i = 0; i < arraySize - 1; i++)
        if (array[i] < array[i + 1])
            return false;

    return true;
}

// возвращает среднее геометрическое положительных элементов массива
// array размером arraySize
double midGeometric(const int * const array, size_t arraySize) {
    size_t elementsAmount = 0;
    double mult = 1;
    for (size_t i = 0; i < arraySize; i++)
        if (array[i] > 0) {
            mult *= array[i];
            elementsAmount++;
        }

    return elementsAmount > 0 ? pow(mult, 1.0 / elementsAmount) : 0;
}