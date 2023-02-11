#include "12func.h"

void selectionSort(int *const array, ssize_t arraySize) {
    for (size_t i = 1; i < arraySize; i++) {
        int t = array[i];
        size_t j = i;
        while (j > 0 && array[j - 1] > t)
            j--;

        array[i] = t;
    }
}