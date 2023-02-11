#include "../alg.h"

size_t linearRecSearch_(const int * const array, size_t currentIndex, size_t arraySize, int searchElement) {
    if (currentIndex == arraySize || array[currentIndex] < searchElement)
        return -1;
    else
        return array[currentIndex] == searchElement ?
               currentIndex :
               linearRecSearch_(array, currentIndex + 1, arraySize, searchElement);
}

size_t linearRecSearchInArray(const int * const array, size_t arraySize, int searchElement) {
    return linearRecSearch_(array, 0, arraySize, searchElement);
}