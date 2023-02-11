#include "../alg.h"

void sort2(float *a, float *b) {
    if (*a > *b)
        swapFloat(a, b);
}

void intSort2(int *a, int *b) {
    if (*a > *b)
        intSwap(a, b);
}