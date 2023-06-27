#include "task6.h"

int main() {
    Matrix mt = createMatrixFromArray((bool[]){1, 1, 0,
                                               1, 1, 0,
                                               1, 1, 0,
                                               1, 1, 0,
                                               1, 1, 0}, 5, 3);

    MatrixIndex beg, end;
    int size = 0;

    findLongestZeroLineInMatrix(mt.values, mt.nRows, mt.nCols, &beg, &end, &size);

    ASSERT_INT(size, 5);

    ASSERT_MINDEX(((MatrixIndex){0, 2}), ((MatrixIndex){4, 2}), (beg), (end));
}