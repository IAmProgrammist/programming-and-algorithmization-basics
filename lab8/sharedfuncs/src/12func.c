#include "12func.h"

void selectionSort(int *a, const size_t n) {
    for (size_t i = 1; i < n; i++) {
        int t = a[i];
        size_t j = i;
        while (j > 0 && a[j - 1] > t)
            j--;

        a[i] = t;
    }
}