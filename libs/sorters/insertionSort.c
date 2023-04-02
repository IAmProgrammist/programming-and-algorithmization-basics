#include "insertionSort.h"

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

SortFunc getInsertionSFunc() {
    return (SortFunc) {sort, "insertionSort"};
}