#include "task7.h"

int main() {
    Matrix mt = createMatrixFromArray((unsigned int[]){}, 0, 3);

    unsigned int *a = calloc(mt.nCols, sizeof(unsigned int));

    sum(mt.values, mt.nRows, mt.nCols, 3, a);

    ASSERT_ARRAY(a, ((unsigned int[]){0, 0, 0}), 3);

    freeMemMatrix(mt);
    free(a);
}

