#include "task9.h"

int main() {
    int n = 0;
    Matrix b = createMatrixFromArray((double[]){}, n, n);
    double *a = malloc(sizeof(int) * (((n + 1) * n) / 2));
    Matrix act = createMatrixFromArray((double[]){}, n, n);

    findX(a, n, b.values, act.values);

    Matrix exp = createMatrixFromArray((double[]){}, n, n);

    ASSERT_MATRICES(exp, act);

    freeMemMatrix(b);
    freeMemMatrix(act);
    freeMemMatrix(exp);
    free(a);
}