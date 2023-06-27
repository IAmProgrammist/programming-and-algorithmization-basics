#include "task4.h"

int main() {
    Matrix actual = createMatrixFromArray((double []){}, 0, 0);
    subtractMiddleOfLineFromEveryLine(actual.values, actual.nRows, actual.nCols);

    Matrix expected = createMatrixFromArray((double []){}, 0, 0);

    ASSERT_MATRICES(expected, actual);

    freeMemMatrix(actual);
    freeMemMatrix(expected);
}