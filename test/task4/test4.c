#include "task4.h"

int main() {
    Matrix actual = createMatrixFromArray((double []){
        5, 1, 4, 2, 3,
            5, 5, 5, 5, 5,
            3, 1, 1, 1, 3,
            0, 0, 5, 0, 0,
            5, 4, 3, 4, 5}, 5, 5);
    subtractMiddleOfLineFromEveryLine(actual.values, actual.nRows, actual.nCols);

    Matrix expected = createMatrixFromArray((double[]){2, -2, 1, -1, 0,
                                                    0, 0, 0, 0, 0,
                                                    1.2, -0.8, -0.8, -0.8, 1.2,
                                                    -1, -1, 4, -1, -1,
                                                    0.8, -0.2, -1.2, -0.2, 0.8}, 5, 5);

    ASSERT_MATRICES(expected, actual);

    freeMemMatrix(actual);
    freeMemMatrix(expected);
}