#include "../alg.h"

// вводит в массив array с консоли size элементов
void inputArray(int * const array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

// выводит массив array размером size в консоль
void outputArray(const int * const array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

// возвращает "истина" если все элементы массива array размера size уникальны
bool areElementsUnique(const int * const array, size_t size) {
    for (size_t i = 0; i < size - 1; i++)
        if (linearSearch(array + i + 1, size - i - 1, array[i]) != (size - i - 1))
            return false;

    return true;
}

// сортирует элементы массива array размером size по невозрастанию
void sortInsertion(int * const array, size_t size) {
    for (size_t i = 1; i < size; i++) {
        int currentElement = array[i];
        size_t j = i;

        while (j > 0 && array[j - 1] < currentElement) {
            intSwap(array + j, array + j - 1);
            j--;
        }

        array[j] = currentElement;
    }
}