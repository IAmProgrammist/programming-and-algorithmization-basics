#include "11func.h"

bool isPalindrome(const int *array, int arraySize) {
    for (int *leftPointer = array, *rightPointer = array + arraySize - 1;
         leftPointer < rightPointer;
         leftPointer++, rightPointer--) {
        if (*leftPointer != *rightPointer)
            return false;
    }

    return true;
}
