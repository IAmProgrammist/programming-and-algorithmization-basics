#include "task6.h"

int main() {
    Matrix mt = createMatrixFromArray((bool[]){1, 1, 1,
                                               1, 1, 1,
                                               1, 1, 1,
                                               1, 0, 1,
                                               1, 0, 1}, 5, 3);

    MatrixIndex beg, end;
    int size = 0;

    findLongestZeroLineInMatrix(mt.values, mt.nRows, mt.nCols, &beg, &end, &size);

    ASSERT_INT(size, 2);

    ASSERT_MINDEX(((MatrixIndex){3, 1}), ((MatrixIndex){4, 1}), (beg), (end));

    freeMemMatrix(mt);
}