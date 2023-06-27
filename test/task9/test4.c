#include "task9.h"

#define n 4

int main() {
    Matrix b = createMatrixFromArray((double[]){-19, 72, 54, 87,
                                                8, 0, 2, 12,
                                                101, -90, -3, -37,
                                                24, -54, 72, 42}, n, n);
    double a[((n + 1) * n) / 2] = {4, 1, 3, 3, 2, 0, 0,-9, 5, 6};
    Matrix act = createMatrixFromArray((double[]){0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0,0, 0, 0, 0}, n, n);

    findX(a, n, b.values, act.values);

    Matrix exp = createMatrixFromArray((double[]){-2, 21, -1, 9,
                                                  4, 0, 1, 6,
                                                  -9, 5, 7, 8,
                                                  4, -9, 12, 7}, n, n);

    ASSERT_MATRICES(exp, act);

    freeMemMatrix(b);
    freeMemMatrix(act);
    freeMemMatrix(exp);
}