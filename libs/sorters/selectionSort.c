#include "selectionSort.h"

#if COUNT_COMPARES == 0
static void sort(int *a, size_t n) {
    for (size_t i = 0; i < n - 1; i++) {
        size_t mIndex = i;
        for (size_t j = i; j < n; j++)
            if (a[mIndex] > a[j])
                mIndex = j;

        swap(a + i, a + mIndex);
    }
}
#else
static unsigned long long sort(int *a, size_t n) {
    unsigned long long compares = 0;

    for (size_t i = 0; ++compares && i < n - 1; i++) {
        size_t mIndex = i;
        for (size_t j = i; ++compares && j < n; j++)
            if (++compares && a[mIndex] > a[j])
                mIndex = j;

        swap(a + i, a + mIndex);
    }

    return compares;
}
#endif

SortFunc getSelectionSFunc() {
    return (SortFunc) {sort, "selectionSort"};
}