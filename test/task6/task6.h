#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK6_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK6_H

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "Tasks.h"

#define EPS 0.000001

int isEqual(double a, double b) {
    return fabs(b - a) < EPS;
}

typedef struct Matrix {
    bool **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} Matrix;

Matrix getMemMatrix(int nRows, int nCols) {
    bool **values = (bool **) malloc(sizeof(bool *) * nRows);
    for (int i = 0; i < nRows; i++)
        values[i] = (bool *) malloc(sizeof(bool) * nCols);
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

Matrix createMatrixFromArray(const bool *a, int nRows,
                             int nCols) {
    Matrix newMatrix = getMemMatrix(nRows, nCols);

    int k = 0;
    for (int i = 0; i < nRows; i++)
        for (int j = 0; j < nCols; j++)
            newMatrix.values[i][j] = a[k++];

    return newMatrix;
}

void assertInt(int ex, int ac,
               char const *fileName, char const *funcName,
               int line) {
    if (ex != ac) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);
        fprintf(stderr, "Expected: \"%d\"\n", ex);
        fprintf(stderr, "Got: \"%d\"\n\n", ac);

        assert(0);
    }
}

#define ASSERT_MINDEX(ex1, ex2, ac1, ac2) assertMIndex(ex1, ex2, ac1, ac2, \
                 __FILE__, __FUNCTION__, __LINE__)

void assertMIndex(MatrixIndex ex1, MatrixIndex ex2, MatrixIndex ac1, MatrixIndex ac2,
                  char const *fileName, char const *funcName,
                  int line) {
    if (!((ex1.column == ac1.column && ex1.row == ac1.row && ex2.column == ac2.column && ex2.row == ac2.row) ||
          ex2.column == ac1.column && ex2.row == ac1.row && ex1.column == ac2.column && ex1.row == ac2.row)) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);
        fprintf(stderr, "Expected: {%d; %d}, {%d; %d}\n", ex1.column, ex1.row, ex2.column, ex2.row);
        fprintf(stderr, "Got: {%d; %d}, {%d; %d}\n", ac1.column, ac1.row, ac2.column, ac2.row);

        assert(0);
    }
}

#define ASSERT_INT(ex, ac) assertInt(ex, ac, \
                 __FILE__, __FUNCTION__, __LINE__)

#endif
