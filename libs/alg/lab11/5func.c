#include "../alg.h"

int isSortedNonDec(int *a, size_t arraySize) {
    if (arraySize < 2)
        return true;
    else
        return a[0] <= a[1] && isSortedNonDec(a + 1, arraySize - 1);
}