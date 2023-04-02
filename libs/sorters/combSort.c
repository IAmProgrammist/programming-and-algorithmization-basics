#include "combSort.h"

static void sort(int *a, size_t n) {
    size_t step = n - 1;
    bool swapped = true;

    while (step > 1 || swapped) {
        swapped = 0;

        for (size_t i = 0, j = step; j < n; i++, j++)
            if (a[i] > a[j]) {
                swapped = 1;
                swap(a + i, a + j);
            }

        if (step > 1)
            step /= 1.24733;
    }
}

SortFunc getCombSFunc() {
    return (SortFunc) {sort, "combSort"};
}