#include "insertionSort.h"

#if COUNT_COMPARES == 0
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
#else
static unsigned long long sort(int *a, size_t n) {
    unsigned long long compares = 0;
    size_t step = n - 1;
    bool swapped = true;

    while (((step > 1 && ++compares) || (swapped && ++compares))) {
        swapped = 0;

        for (size_t i = 0; ++compares && i < n; i++) {
            int currentElement = a[i];

            size_t j = i;
            while (++compares && j >= step && ++compares && a[j - step] > currentElement) {
                swap(a + j, a + j - step);
                j -= step;
                swapped = true;
            }

            a[j] = currentElement;
        }

        if (++compares && step > 1)
            step /= 1.24733;
    }

    return compares;
}
#endif

SortFunc getShellSFunc() {
    return (SortFunc) {sort, "shellSort"};
}