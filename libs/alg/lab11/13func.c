#include "../alg.h"

int binSearch_(int *array, int iLeft, int iRight, int searchElement) {
    if (iLeft == iRight)
        return iLeft;
    else {
        int middleI = (iLeft + iRight) / 2;
        if (array[middleI] > searchElement)
            return binSearch_(array, iLeft, middleI - 1, searchElement);
        else
            return binSearch_(array, middleI + 1, iRight, searchElement);
    }
}

int binSearch(int *array, size_t arraySize, int searchElement) {
    return binSearch_(array, 0, arraySize - 1, searchElement);
}