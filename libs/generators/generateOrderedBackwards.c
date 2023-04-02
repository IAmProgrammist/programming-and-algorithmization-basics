#include "generateOrderedBackwards.h"

void generateOrderedBackwards(int *a, size_t n) {
    if (!n) return;

    *a = n * 100;

    for (int i = 1; i < n; i++)
        a[i] = a[i - 1] - rand() % 100;
}

GeneratingFunc getOrderedBackwardsGFunc() {
    return (GeneratingFunc) {generateOrderedBackwards, "orderedBackwards"};
}