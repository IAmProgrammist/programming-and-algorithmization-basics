#include "../alg.h"

double getScalarProduct(int *a, int *b, int n) {
    int scalarProduct = 0;

    for (int i = 0; i < n; i++)
        scalarProduct += a[i] * b[i];

    return scalarProduct;
}

double getVectorLength(int *a, int n) {
    int sumOfCubes = 0;

    for (int i = 0; i < n; i++)
        sumOfCubes += a[i] * a[i];

    return sqrt(sumOfCubes);
}

double getCosine(int *a, int *b, int n) {
    double vecLenA = getVectorLength(a, n);
    double vecLenB = getVectorLength(a, n);

    // The angle between zero-vector(s) is 0 degree, cos(0) = 1
    if (vecLenA == 0 || vecLenB == 0) return 1;

    return getScalarProduct(a, b, n) / (vecLenA * vecLenB);
}