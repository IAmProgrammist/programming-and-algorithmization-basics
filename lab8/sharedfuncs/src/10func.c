#include "10func.h"

void reverseArray(int *array, const size_t arraySize) {
    for (int *leftPointer = array, *rightPointer = array + arraySize - 1;
              leftPointer < rightPointer;
              leftPointer++, rightPointer--) {
        swap(leftPointer, rightPointer);
    }
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}