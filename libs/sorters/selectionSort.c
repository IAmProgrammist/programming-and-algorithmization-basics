#include "selectionSort.h"

static void sort(int *a, size_t n) {
    for (size_t i = 0; i < n - 1; i++) {
        size_t mIndex = i;
        for (size_t j = i; j < n; j++)
            if (a[mIndex] > a[j])
                mIndex = j;

        swap(a + i, a + mIndex);
    }
}

SortFunc getSelectionSFunc() {
    return (SortFunc) {sort, "selectionSort"};
}