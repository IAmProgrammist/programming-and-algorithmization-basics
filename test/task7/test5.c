#include "task7.h"

int main() {
    Matrix mt = createMatrixFromArray((unsigned int[]) {0, 0, 1, 0,
                                                        0, 0, 1, 1,
                                                        0, 0, 0, 1,
                                                        1, 0, 0, 1}, 4, 4);

    unsigned int *a = calloc(mt.nCols, sizeof(unsigned int));

    sum(mt.values, mt.nRows, mt.nCols, 2, a);

    ASSERT_ARRAY(a, ((unsigned int[]) {1, 1, 1, 1}), mt.nCols);

    freeMemMatrix(mt);
    free(a);
}