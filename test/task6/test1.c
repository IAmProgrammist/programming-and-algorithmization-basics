#include "task6.h"

int main() {
    Matrix mt = createMatrixFromArray((bool[]){}, 0, 0);

    MatrixIndex beg, end;
    int size = 0;

    findLongestZeroLineInMatrix(mt.values, mt.nRows, mt.nCols, &beg, &end, &size);

    ASSERT_INT(size, 0);

    freeMemMatrix(mt);
}

