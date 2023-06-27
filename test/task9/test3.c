#include "task9.h"

#define n 3

int main() {
    Matrix b = createMatrixFromArray((double[]){-31, 99, 18,
                                                8, 0, 2,
                                                81, -45, -63}, n, n);
    double a[((n + 1) * n) / 2] = {4, 1, 3, 2, 0, -9};
    Matrix act = createMatrixFromArray((double[]){0, 0, 0, 0, 0, 0, 0, 0, 0}, n, n);

    findX(a, n, b.values, act.values);

    Matrix exp = createMatrixFromArray((double[]){-2, 21, -1,
                                                  4, 0, 1,
                                                  -9, 5, 7}, n, n);

    ASSERT_MATRICES(exp, act);

    freeMemMatrix(b);
    freeMemMatrix(act);
    freeMemMatrix(exp);
}