#include "../alg.h"

bool isTrianglePossible(int a, int b, int c) {
    intSort3(&a, &b, &c);

    return c < a + b;
}