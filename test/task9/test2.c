#include "task9.h"

#define n 1

int main() {
    Matrix b = createMatrixFromArray((double[]){-8}, n, n);
    double a[n] = {4};
    Matrix act = createMatrixFromArray((double[]){0}, n, n);

    findX(a, n, b.values, act.values);

    Matrix exp = createMatrixFromArray((double[]){-2}, n, n);

    ASSERT_MATRICES(exp, act);

    freeMemMatrix(b);
    freeMemMatrix(act);
    freeMemMatrix(exp);
}