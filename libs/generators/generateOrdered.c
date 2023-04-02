#include "generateOrdered.h"

void generateOrdered(int *a, size_t n) {
    if (!n) return;

    *a = rand() % 100;

    for (int i = 1; i < n; i++)
        a[i] = a[i - 1] + rand() % 100;
}

GeneratingFunc getOrderedGFunc() {
    return (GeneratingFunc) {generateOrdered, "ordered"};
}