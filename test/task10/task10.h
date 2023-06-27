#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK3_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK3_H

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "Tasks.h"

typedef struct Matrix {
    double **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} Matrix;

Matrix getMemMatrix(int nRows, int nCols) {
    double **values = (double **) malloc(sizeof(double *) * nRows);
    for (int i = 0; i < nRows; i++)
        values[i] = (double *) malloc(sizeof(double) * nCols);
    return (Matrix) {values, nRows, nCols};
}

void freeMemMatrix(Matrix m) {
    for (int i = 0; i < m.nRows; i++)
        free(m.values[i]);
    free(m.values);
}

bool areTwoMatricesEqual(Matrix m1, Matrix m2) {
    if (m1.nRows != m2.nRows || m1.nCols != m2.nCols)
        return false;

    for (int i = 0; i < m1.nRows; i++)
        for (int j = 0; j < m1.nCols; j++)
            if (m1.values[i][j] != m2.values[i][j])
                return false;

    return true;
}

Matrix createMatrixFromArray(const double *a, int nRows,
                             int nCols) {
    Matrix newMatrix = getMemMatrix(nRows, nCols);

    int k = 0;
    for (int i = 0; i < nRows; i++)
        for (int j = 0; j < nCols; j++)
            newMatrix.values[i][j] = a[k++];

    return newMatrix;
}
void assertString(const char *expected, char *got,
                  char const *fileName, char const *funcName,
                  int line) {
    if (strcmp(expected, got)) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);
        fprintf(stderr, "Expected: \"%s\"\n", expected);
        fprintf(stderr, "Got: \"%s\"\n\n", got);
        assert(0);
    } //else
        //fprintf(stderr, "%s - OK\n", funcName);
}

#define ASSERT_STRING(expected, got) assertString(expected, got, \
                 __FILE__, __FUNCTION__, __LINE__)

#endif
