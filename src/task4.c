#include <stddef.h>
#include <stdlib.h>

#include "Tasks.h"

typedef struct JosephProblemMatrix {
    int **matrix;
    int n;
} JosephProblemMatrix;

static JosephProblemMatrix createJosephProblemMatrix(int nn) {
    int **res = malloc(nn * sizeof(int *));

    for (int i = 0; i < nn; i++)
        res[i] = malloc(sizeof(int) * nn);

    if (nn <= 0)
        return (JosephProblemMatrix) {NULL, 0};

    for (int i = 0; i < nn; i++)
        res[0][i] = 1;

    for (int m = 1; m <= nn; m++)
        for (int n = 1; n < nn; n++) {
            res[n][m - 1] = (m + res[n - 1][m - 1] - 1) % (n + 1) + 1;
        }

    return (JosephProblemMatrix) {res, nn};
}

void freeJosephProblemMatrix(JosephProblemMatrix matrix) {
    for (int i = 0; i < matrix.n; i++)
        free(matrix.matrix[i]);

    free(matrix.matrix);
}

int josephProblemFindSurvivor(int n, int m) {
    JosephProblemMatrix matrix = createJosephProblemMatrix(n);

    int res = -1;
    if (matrix.matrix != NULL) {
        int indexM = (m - 1) % n;
        res = matrix.matrix[n - 1][indexM];
    }

    freeJosephProblemMatrix(matrix);

    return res;
}

int josephProblemFindMForSurvivorOne(int n) {
    int m = -1;

    // This is gonna take a lot of resources
    // But I must keep the structure of project
    for (int i = 1; i <= n; i++)
        if (josephProblemFindSurvivor(n, i) == 1)
            m = i;


    return m;
}