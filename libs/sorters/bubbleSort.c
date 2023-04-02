#include "bubbleSort.h"

static void sort(int *a, size_t n) {
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
                swap(a + j, a + j + 1);
    }
}

SortFunc getBubbleSFunc() {
    return (SortFunc) {sort, "bubbleSort"};
}