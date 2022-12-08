#include "../alg.h"

void sort3(float *a, float *b, float *c) {
    sort2(a, b);
    sort2(b, c);
    sort2(a, b);
}

void intSort3(int *a, int *b, int *c) {
    intSort2(a, b);
    intSort2(b, c);
    intSort2(a, b);
}