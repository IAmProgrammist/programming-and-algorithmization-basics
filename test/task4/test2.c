#include "task4.h"

int main() {
    Matrix actual = createMatrixFromArray((double []){5, 1, 4, 2, 3}, 1, 5);
    subtractMiddleOfLineFromEveryLine(actual.values, actual.nRows, actual.nCols);

    Matrix expected = createMatrixFromArray((double []){2, -2, 1, -1, 0}, 1, 5);

    ASSERT_MATRICES(expected, actual);

    freeMemMatrix(actual);
    freeMemMatrix(expected);
}