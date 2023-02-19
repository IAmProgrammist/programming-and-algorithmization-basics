#include "../libs/data_structures/matrix/matrix.h"

void testSwapRows() {
    Matrix m = createMatrixFromArray((int[]) {1, 2, 3, 4,
                                              5, 6, 7, 8,
                                              9, 10, 11, 12}, 3, 4);

    swapRows(m, 0, 2);

    Matrix expectedArray = createMatrixFromArray((int[]) {9, 10, 11, 12,
                                                          5, 6, 7, 8,
                                                          1, 2, 3, 4}, 3, 4);

    assert(areTwoMatricesEqual(expectedArray, m));

    freeMemMatrix(m);
    freeMemMatrix(expectedArray);
}

void testSwapColumns() {
    Matrix m = createMatrixFromArray((int[]) {1, 2, 3, 4,
                                              5, 6, 7, 8,
                                              9, 10, 11, 12}, 3, 4);

    swapColumns(m, 0, 2);

    Matrix expectedArray = createMatrixFromArray((int[]) {3, 2, 1, 4,
                                                          7, 6, 5, 8,
                                                          11, 10, 9, 12}, 3, 4);

    assert(areTwoMatricesEqual(expectedArray, m));

    freeMemMatrix(m);
    freeMemMatrix(expectedArray);
}

int getSum(int *array, int arraySize) {
    int result = 0;

    for (int i = 0; i < arraySize; i++)
        result += array[i];

    return result;
}

int getMin(int *array, int arraySize) {
    int result = arraySize == 0 ? 0 : array[0];

    for (int i = 0; i < arraySize; i++)
        if (array[i] < result)
            result = array[i];

    return result;
}

int getMax(int *array, int arraySize) {
    int result = arraySize == 0 ? 0 : array[0];

    for (int i = 0; i < arraySize; i++)
        if (array[i] > result)
            result = array[i];

    return result;
}

void testInsertionSortRowsMatrixByRowCriteria() {
    Matrix m = createMatrixFromArray((int[]) {12, 6, 1, 4, //23
                                              9, 10, 11, 5, //35
                                              7, 2, 3, 8/*20*/}, 3, 4);

    insertionSortRowsMatrixByRowCriteria(m, getSum);

    Matrix expectedArray = createMatrixFromArray((int[]) {7, 2, 3, 8,
                                                          12, 6, 1, 4,
                                                          9, 10, 11, 5}, 3, 4);

    assert(areTwoMatricesEqual(expectedArray, m));

    freeMemMatrix(expectedArray);

    insertionSortRowsMatrixByRowCriteria(m, getMax);

    expectedArray = createMatrixFromArray((int[]) {7, 2, 3, 8,
                                                   9, 10, 11, 5,
                                                   12, 6, 1, 4}, 3, 4);

    assert(areTwoMatricesEqual(expectedArray, m));

    freeMemMatrix(expectedArray);

    insertionSortRowsMatrixByRowCriteria(m, getMin);

    expectedArray = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                                   7, 2, 3, 8,
                                                   9, 10, 11, 5}, 3, 4);

    assert(areTwoMatricesEqual(expectedArray, m));

    freeMemMatrix(m);
    freeMemMatrix(expectedArray);
}

void testSelectionSortColsMatrixByColCriteria() {
    //7    2       1      4
    Matrix m = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                              9, 10, 11, 5,
                                              7, 2, 3, 8}, 3, 4);

    selectionSortColsMatrixByColCriteria(m, getSum);

    Matrix expectedArray = createMatrixFromArray((int[]) {1, 4, 6, 12,
                                                          11, 5, 10, 9,
                                                          3, 8, 2, 7}, 3, 4);

    assert(areTwoMatricesEqual(expectedArray, m));

    freeMemMatrix(expectedArray);

    selectionSortColsMatrixByColCriteria(m, getMax);

    expectedArray = createMatrixFromArray((int[]) {4, 6, 1, 12,
                                                   5, 10, 11, 9,
                                                   8, 2, 3, 7}, 3, 4);

    assert(areTwoMatricesEqual(expectedArray, m));

    freeMemMatrix(expectedArray);

    selectionSortColsMatrixByColCriteria(m, getMin);

    expectedArray = createMatrixFromArray((int[]) {1, 6, 4, 12,
                                                   11, 10, 5, 9,
                                                   3, 2, 8, 7}, 3, 4);

    assert(areTwoMatricesEqual(expectedArray, m));

    freeMemMatrix(m);
    freeMemMatrix(expectedArray);
}

void testIsSquareMatrix() {
    // Why go through all this trouble for such a small function...
    Matrix m = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                              9, 10, 11, 5,
                                              7, 2, 3, 8}, 3, 4);

    assert(!isSquareMatrix(m));

    freeMemMatrix(m);

    m = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                       9, 10, 11, 5,
                                       7, 2, 3, 8,
                                       1, 2, 3, 4}, 4, 4);

    assert(isSquareMatrix(m));

    freeMemMatrix(m);
}

void testAreTwoMatricesEqual() {
    // Why go through all this trouble for such a small function...
    Matrix m1 = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                               9, 10, 11, 5,
                                               7, 2, 3, 8}, 3, 4);
    Matrix m2 = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                               9, 10, 11, 5,
                                               7, 2, 3, 8}, 3, 4);

    assert(areTwoMatricesEqual(m1, m2));

    freeMemMatrix(m1);
    freeMemMatrix(m2);

    m1 = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                        9, 16, 11, 5,
                                        7, 2, 3, 8}, 3, 4);
    m2 = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                        9, 10, 11, 5,
                                        7, 2, 3, 8}, 3, 4);

    assert(!areTwoMatricesEqual(m1, m2));

    freeMemMatrix(m1);
    freeMemMatrix(m2);

    m1 = createMatrixFromArray((int[]) {12, 6,
                                        9, 16
    }, 2, 2);
    m2 = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                        9, 10, 11, 5,
                                        7, 2, 3, 8}, 3, 4);

    assert(!areTwoMatricesEqual(m1, m2));

    freeMemMatrix(m1);
    freeMemMatrix(m2);
}

void testIsEMatrix() {
    Matrix m1 = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                               9, 10, 11, 5,
                                               7, 2, 3, 8}, 3, 4);

    assert(!isEMatrix(m1));

    freeMemMatrix(m1);

    m1 = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                        9, 10, 11, 5,
                                        7, 2, 3, 8,
                                        1, 1, 1, 1}, 4, 4);

    assert(!isEMatrix(m1));

    freeMemMatrix(m1);

    m1 = createMatrixFromArray((int[]) {1, 0, 0, 0,
                                        0, 1, 0, 0,
                                        0, 0, 1, 0,
                                        0, 0, 0, 1}, 4, 4);

    assert(isEMatrix(m1));

    freeMemMatrix(m1);

    m1 = createMatrixFromArray((int[]) {1, 0, 0, 0,
                                        0, 1, 0, 1,
                                        0, 0, 1, 0,
                                        0, 0, 0, 1}, 4, 4);

    assert(!isEMatrix(m1));

    freeMemMatrix(m1);
}

void testIsSymmetricMatrix() {
    Matrix m = createMatrixFromArray((int[]) {12, 6, 1, 4,
                                              9, 10, 11, 5,
                                              7, 2, 3, 8}, 3, 4);

    assert(!isSymmetricMatrix(m));

    freeMemMatrix(m);

    m = createMatrixFromArray((int[]) {1, 3, 0,
                                       3, 2, 6,
                                       0, 6, 5}, 3, 3);

    assert(isSymmetricMatrix(m));

    freeMemMatrix(m);

    m = createMatrixFromArray((int[]) {1, 0, 0,
                                       0, 1, 0,
                                       0, 0, 1}, 3, 3);

    assert(isSymmetricMatrix(m));

    freeMemMatrix(m);

    m = createMatrixFromArray((int[]) {1, 5,
                                       5, 7}, 2, 2);

    assert(isSymmetricMatrix(m));

    freeMemMatrix(m);

    m = createMatrixFromArray((int[]) {2}, 1, 1);

    assert(isSymmetricMatrix(m));

    freeMemMatrix(m);
}

void testTransposeSquareMatrix() {
    Matrix m = createMatrixFromArray((int[]) {1, 2, 3,
                                              4, 5, 6,
                                              7, 8, 9}, 3, 3);

    transposeSquareMatrix(m);

    Matrix expected = createMatrixFromArray((int[]) {1, 4, 7,
                                                     2, 5, 8,
                                                     3, 6, 9}, 3, 3);

    assert(areTwoMatricesEqual(m, expected));

    freeMemMatrix(m);
    freeMemMatrix(expected);
}

void testTransposeMatrix() {
    Matrix m = createMatrixFromArray((int[]) {1, 2, 3,
                                              4, 5, 6}, 2, 3);

    transposeMatrix(&m);

    Matrix expected = createMatrixFromArray((int[]) {1, 4,
                                                     2, 5,
                                                     3, 6}, 3, 2);

    assert(areTwoMatricesEqual(m, expected));

    freeMemMatrix(m);
    freeMemMatrix(expected);
}

void testGetMinValuePos() {
    Matrix m = createMatrixFromArray((int[]) {19, 2, 3,
                                              4, 1, 6}, 2, 3);

    Position resultMinPos = getMinValuePos(m);

    assert(resultMinPos.rowIndex == 1 && resultMinPos.colIndex == 1);

    freeMemMatrix(m);
}

void testGetMaxValuePos() {
    Matrix m = createMatrixFromArray((int[]) {3, 2, 19,
                                              4, 1, 6}, 2, 3);

    Position resultMinPos = getMaxValuePos(m);

    assert(resultMinPos.rowIndex == 0 && resultMinPos.colIndex == 2);

    freeMemMatrix(m);
}

void testCreateMatrixFromArray() {
    Matrix m = createMatrixFromArray(
            (int[]) {
                    1, 1, 0,
                    0, 0, 0,
                    0, 0, 1,
                    0, 0, 0,
                    0, 1, 1,
            }, 5, 3);

    assert(m.values[0][0] && m.values[0][1] && !m.values[0][2] &&
           !m.values[1][0] && !m.values[1][1] && !m.values[1][2] &&
           !m.values[2][0] && !m.values[2][1] && m.values[2][2] &&
           !m.values[3][0] && !m.values[3][1] && !m.values[3][2] &&
           !m.values[4][0] && m.values[4][1] && m.values[4][2]);

    freeMemMatrix(m);
}

void testCreateArrayOfMatrixFromArray() {
    Matrix *mArray = createArrayOfMatrixFromArray(
            (int[]) {
                    1, 1, 0,
                    0, 0, 0,
                    0, 0, 1,
                    0, 0, 0,
                    0, 1, 1,
                    1, 0, 1
            }, 3, 2, 3);

    assert(mArray[0].values[0][0] && mArray[0].values[0][1] && !mArray[0].values[0][2] &&
           !mArray[0].values[1][0] && !mArray[0].values[1][1] && !mArray[0].values[1][2]);

    assert(!mArray[1].values[0][0] && !mArray[1].values[0][1] && mArray[1].values[0][2] &&
           !mArray[1].values[1][0] && !mArray[1].values[1][1] && !mArray[1].values[1][2]);

    assert(!mArray[2].values[0][0] && mArray[2].values[0][1] && mArray[2].values[0][2] &&
           mArray[2].values[1][0] && !mArray[2].values[1][1] && mArray[2].values[1][2]);

    freeMemMatrices(mArray, 3);
}

void test() {
    testSwapRows();
    testSwapColumns();
    testInsertionSortRowsMatrixByRowCriteria();
    testSelectionSortColsMatrixByColCriteria();
    testIsSquareMatrix();
    testAreTwoMatricesEqual();
    testIsEMatrix();
    testIsSymmetricMatrix();
    testTransposeSquareMatrix();
    testTransposeMatrix();
    testGetMinValuePos();
    testGetMaxValuePos();
    testCreateMatrixFromArray();
    testCreateArrayOfMatrixFromArray();
}

int main() {
    test();
}