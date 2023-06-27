#include "task6.h"

int main() {
    Matrix mt = createMatrixFromArray((bool[]){1, 1, 1, 1, 1,
                                               1, 1, 1, 1, 1,
                                               1, 1, 0, 0, 0}, 3, 5);

    MatrixIndex beg, end;
    int size = 0;

    findLongestZeroLineInMatrix(mt.values, mt.nRows, mt.nCols, &beg, &end, &size);

    ASSERT_INT(size, 3);

    ASSERT_MINDEX(((MatrixIndex){2, 2}), ((MatrixIndex){2, 4}), (beg), (end));

    freeMemMatrix(mt);
}