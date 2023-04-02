#include "bubbleSort.h"

#if COUNT_COMPARES == 0
static void sort(int *a, size_t n) {
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
                swap(a + j, a + j + 1);
    }
}
#else
static unsigned long long sort(int *a, size_t n) {
    unsigned long long compares = 0;

    for (size_t i = 0; ++compares && i < n - 1; i++) {
        for (size_t j = 0; ++compares && j < n - 1 - i; j++)
            if (++compares && a[j] > a[j + 1])
                swap(a + j, a + j + 1);
    }

    return compares;
}
#endif

SortFunc getBubbleSFunc() {
    return (SortFunc) {sort, "bubbleSort"};
}