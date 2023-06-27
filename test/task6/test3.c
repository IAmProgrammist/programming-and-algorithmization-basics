#include "task6.h"

int main() {
    Matrix mt = createMatrixFromArray((bool[]){1, 1, 1, 1, 0, 1, 1, 1, 1}, 3, 3);

    MatrixIndex beg, end;
    int size = 0;

    findLongestZeroLineInMatrix(mt.values, mt.nRows, mt.nCols, &beg, &end, &size);

    ASSERT_INT(size, 1);

    ASSERT_MINDEX(((MatrixIndex){1, 1}), ((MatrixIndex){1, 1}), (beg), (end));

    freeMemMatrix(mt);
}