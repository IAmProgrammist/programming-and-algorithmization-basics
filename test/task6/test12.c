#include "task6.h"

int main() {
    Matrix mt = createMatrixFromArray((bool[]){1, 0, 1, 0, 1,
                                               1, 1, 0, 0, 0,
                                               1, 1, 0, 1, 1,
                                               1, 0, 0, 0, 1,
                                               0, 1, 1, 1, 1}, 5, 5);

    MatrixIndex beg, end;
    int size = 0;

    findLongestZeroLineInMatrix(mt.values, mt.nRows, mt.nCols, &beg, &end, &size);

    ASSERT_INT(size, 4);

    ASSERT_MINDEX(((MatrixIndex){4, 0}), ((MatrixIndex){1, 3}), (beg), (end));
}