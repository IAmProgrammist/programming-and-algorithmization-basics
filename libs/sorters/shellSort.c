#include "insertionSort.h"

static void sort(int *a, size_t n) {
    size_t step = n - 1;
    bool swapped = true;

    while (step > 1 || swapped) {
        swapped = 0;

        for (size_t i = 0; i < n; i++) {
            int currentElement = a[i];

            size_t j = i;
            while (j >= step && a[j - step] > currentElement) {
                swap(a + j, a + j - step);
                j -= step;
                swapped = true;
            }

            a[j] = currentElement;
        }

        if (step > 1)
            step /= 1.24733;
    }
}

SortFunc getShellSFunc() {
    return (SortFunc) {sort, "shellSort"};
}