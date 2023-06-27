#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK3_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK3_H

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "Tasks.h"

typedef struct Matrix {
    unsigned int **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} Matrix;

Matrix getMemMatrix(int nRows, int nCols) {
    unsigned int **values = (unsigned int **) malloc(sizeof(unsigned int *) * nRows);
    for (int i = 0; i < nRows; i++)
        values[i] = (unsigned int *) malloc(sizeof(unsigned int) * nCols);
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

Matrix createMatrixFromArray(const unsigned int *a, int nRows,
                             int nCols) {
    Matrix newMatrix = getMemMatrix(nRows, nCols);

    int k = 0;
    for (int i = 0; i < nRows; i++)
        for (int j = 0; j < nCols; j++)
            newMatrix.values[i][j] = a[k++];

    return newMatrix;
}

bool arraysEqual(unsigned int* ar, unsigned int* ar2, int size) {
    for (int i = 0; i < size; i++)
        if (ar[i] != ar2[i])
            return false;

    return true;
}

void assertArray(unsigned int* ar, unsigned int* ar2, int size,
                 char const *fileName, char const *funcName,
                 int line) {
    if (!arraysEqual(ar, ar2, size)) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);

        assert(0);
    }
}

#define ASSERT_ARRAY(ar, ar2, size) assertArray(ar, ar2, size, \
                 __FILE__, __FUNCTION__, __LINE__)

#endif
