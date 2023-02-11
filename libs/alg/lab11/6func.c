#include "../alg.h"

static int getFirstMinIndex_(int currentIndex, int currentMinValue, int currentMinIndex, size_t arraySize) {
    if (currentIndex == arraySize)
        return currentMinIndex;
    else {
        int value;
        scanf("%d", &value);

        if (value < currentMinValue) {
            currentMinValue = value;
            currentMinIndex = currentIndex;
        }

        return getFirstMinIndex_(currentIndex + 1, currentMinValue, currentMinIndex, arraySize);
    }
}

int getFirstMinIndex(int n) {
    int min;
    scanf("%d", &min);

    return getFirstMinIndex_(1, min, 0, n);
}
