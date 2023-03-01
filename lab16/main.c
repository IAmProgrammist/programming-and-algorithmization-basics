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

void test() {
    testTransposeIfMatrixHasNotEqualSumOfRows();
}

int main() {
    test();

}