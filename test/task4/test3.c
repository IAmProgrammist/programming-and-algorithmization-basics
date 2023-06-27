#include "task4.h"

int main() {
    Matrix actual = createMatrixFromArray((double []){5, 1, 4, 2, 3}, 5, 1);
    subtractMiddleOfLineFromEveryLine(actual.values, actual.nRows, actual.nCols);

    Matrix expected = createMatrixFromArray((double []){0, 0, 0, 0, 0}, 5, 1);

    ASSERT_MATRICES(expected, actual);

    freeMemMatrix(actual);
    freeMemMatrix(expected);
}