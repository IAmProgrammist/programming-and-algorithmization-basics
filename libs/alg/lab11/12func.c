#include "../alg.h"

ssize_t getFirstMinElementIndex_(const int * const array, ssize_t currentIndex, ssize_t arraySize) {
    if (currentIndex == arraySize - 1)
        return currentIndex;
    else {
        ssize_t nextMinIndex = getFirstMinElementIndex_(array, currentIndex + 1, arraySize);
        if (array[nextMinIndex] < array[currentIndex])
            return nextMinIndex;
        else
            return currentIndex;
    }
}

ssize_t getFirstMinElementIndex(const int * const array, ssize_t arraySize) {
    return getFirstMinElementIndex_(array, 0, arraySize);
}

void selectionSort(int * const array, ssize_t arraySize) {
    if (arraySize <= 1)
        return;
    else {
        ssize_t minIndex = getFirstMinElementIndex(array, arraySize);
        intSwap(array, array + minIndex);
        selectionSort(array + 1, arraySize - 1);
    }
}