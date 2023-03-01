#include "../libs/data_structures/matrix/matrix.h"

void testTransposeIfMatrixHasNotEqualSumOfRows() {
    Matrix m = createMatrixFromArray((int[]) {1, 1, 1,
                                              2, 2, 2,
                                              3, 3, 3}, 3, 3);
    transposeIfMatrixHasNotEqualSumOfRows(m);

    Matrix expectedMatrix = createMatrixFromArray((int[]) {1, 2, 3,
                                                           1, 2, 3,
                                                           1, 2, 3}, 3, 3);

    assert(areTwoMatricesEqual(m, expectedMatrix));

    freeMemMatrix(m);
    freeMemMatrix(expectedMatrix);

    m = createMatrixFromArray((int[]) {1, 2, 1,
                                       2, 1, 1,
                                       3, 3, 3}, 3, 3);
    transposeIfMatrixHasNotEqualSumOfRows(m);

    expectedMatrix = createMatrixFromArray((int[]) {1, 2, 1,
                                                    2, 1, 1,
                                                    3, 3, 3}, 3, 3);

    assert(areTwoMatricesEqual(m, expectedMatrix));

    freeMemMatrix(m);
    freeMemMatrix(expectedMatrix);
}

void testIsMutuallyInverseMatrices() {
    Matrix m1 = createMatrixFromArray((int[]) {2, 5, 7,
                                               6, 3, 4,
                                               5, -2, -3}, 3, 3);

    Matrix m2 = createMatrixFromArray((int[]) {1, -1, 1,
                                               -38, 41, -34,
                                               27, -29, 24}, 3, 3);

    assert(isMutuallyInverseMatrices(m1, m2));

    freeMemMatrix(m1);
    freeMemMatrix(m2);

    m1 = createMatrixFromArray((int[]) {42, 5, 71,
                                               62, 6, 4,
                                               5, -2, 33}, 3, 3);

    m2 = createMatrixFromArray((int[]) {1, 1, 1,
                                               -3, 41, -6,
                                               27, -292, 24}, 3, 3);

    assert(!isMutuallyInverseMatrices(m1, m2));

    freeMemMatrix(m1);
    freeMemMatrix(m2);
}

void testCountNonDescendingRowsMatrices() {
    Matrix *matrices = createArrayOfMatrixFromArray((int[]){7, 1,
                                                            1, 1,

                                                            1, 6,
                                                            2, 2,

                                                            5,4,
                                                            2,3,

                                                            1,3,
                                                            7,9}, 4, 2, 2);

    assert(countNonDescendingRowsMatrices(matrices, 4) == 2);

    freeMemMatrices(matrices, 4);

    matrices = createArrayOfMatrixFromArray((int[]){7, 3,
                                                            6, 2,
                                                            42, 2,

                                                            1, 6,
                                                            2, 2,
                                                            8, 9,

                                                            1, 1,
                                                            2, 2,
                                                            3, 3,

                                                            1,3,
                                                            9,7,
                                                            7, 7}, 4, 3, 2);

    assert(countNonDescendingRowsMatrices(matrices, 4) == 2);

    freeMemMatrices(matrices, 4);
}

void test() {
    testTransposeIfMatrixHasNotEqualSumOfRows();
    testIsMutuallyInverseMatrices();
    testCountNonDescendingRowsMatrices();
}

int main() {
    test();

    return 0;
}