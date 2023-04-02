#include "insertionSort.h"

#if COUNT_COMPARES == 0
static void sort(int *a, size_t n) {
    for (size_t i = 0; i < n; i++) {
        int currentElement = a[i];

        size_t j = i;
        while (j > 0 && a[j - 1] > currentElement) {
            swap(a + j, a + j - 1);
            j--;
        }

        a[j] = currentElement;
    }
}
#else
static unsigned long long sort(int *a, size_t n) {
    unsigned long long compares = 0;

    for (size_t i = 0; ++compares && i < n; i++) {
        int currentElement = a[i];

        size_t j = i;
        while (++compares && j > 0 && ++compares && a[j - 1] > currentElement) {
            swap(a + j, a + j - 1);
            j--;
        }

        a[j] = currentElement;
    }

    return compares;
}
#endif

SortFunc getInsertionSFunc() {
    return (SortFunc) {sort, "insertionSort"};
}