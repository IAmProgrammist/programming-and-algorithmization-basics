#include "task7.h"

int main() {
    Matrix mt = createMatrixFromArray((unsigned int[]){0, 3, 2,
                                                       2, 1, 1,
                                                       1, 2, 0,
                                                       0, 3, 0}, 4, 3);

    unsigned int *a = calloc(mt.nCols, sizeof(unsigned int));

    sum(mt.values, mt.nRows, mt.nCols, 4, a);

    ASSERT_ARRAY(a, ((unsigned int[]){1, 1, 3}), mt.nCols);

    freeMemMatrix(mt);
    free(a);
}