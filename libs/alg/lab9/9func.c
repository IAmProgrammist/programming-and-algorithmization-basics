#include "../alg.h"

#define EPS 0.0000001

// возвращает "истину" если a равен b с точностью EPS = 0.0000001
int fcompare(double a, double b) {
    return fabs(a - b) < EPS;
}

// возвращает "истина" если модуль числа a больше модуля числа b, иначе - "ложь"
bool compareByModulus(int a, int b) {
    return abs(a) < abs(b);
}

// сортирует массив array размером arraySize в соответствии с условием comparator
void insertionSortByComparator(int *const array, size_t arraySize, bool (*comparator)(int, int)) {
    for (size_t i = 1; i < arraySize; i++) {
        size_t j = i;

        while (j > 0 && comparator(array[j], array[j - 1])) {
            intSwap(array + j, array + j - 1);
            j--;
        }
    }
}

// обменивает значения по адресам a и b
void intSwap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// возвращает индекс первого с левого конца элемента массива array размером size,
// равный searchElement
size_t linearSearch(const int * const array, size_t size, int searchElement) {
    size_t index = 0;

    while (index < size && array[index] != searchElement)
        index++;

    return index;
}

// возвращает "истина" если последовательность array размером arraySize > 1
// является геометрической прогрессией, иначе - "ложь"
bool isGeometricProgression(const int * const array, size_t arraySize) {
    if (linearSearch(array, arraySize, 0) == arraySize - 1)
        return false;

    assert(arraySize > 1);

    int *sortedArray = malloc(sizeof(array[0]) * arraySize);

    memcpy(sortedArray, array, arraySize * sizeof(array[0]));
    insertionSortByComparator(sortedArray, arraySize, compareByModulus);

    double q = (1.0 * sortedArray[1]) / sortedArray[0];

    if (fcompare(fabs(q), 1))
        return false;

    for (size_t i = 1; i < arraySize - 1; i++)
        if (!fcompare(q, (1.0 * sortedArray[i + 1]) / sortedArray[i])) {
            free(sortedArray);
            return false;
        }

    free(sortedArray);
    return true;
}

