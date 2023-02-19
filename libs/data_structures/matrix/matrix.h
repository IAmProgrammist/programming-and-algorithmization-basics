#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_MATRIX_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_MATRIX_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../alg/alg.h"

typedef struct Matrix {
    int **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} Matrix;

typedef struct Position {
    int rowIndex;
    int colIndex;
} Position;

Matrix getMemMatrix(int nRows, int nCols);

Matrix *getMemArrayOfMatrices(int nMatrices, int nRows, int nCols);

void freeMemMatrix(Matrix m);

void freeMemMatrices(Matrix *ms, int nMatrices);

void inputMatrix(Matrix m);

void inputMatrices(Matrix *ms, int nMatrices);

void outputMatrix(Matrix m);

void outputMatrices(Matrix *ms, int nMatrices);

void swapRows(Matrix m, int i1, int i2);

void swapColumns(Matrix m, int j1, int j2);

void insertionSortRowsMatrixByRowCriteria(Matrix m,
                                          int (*criteria)(int*, int));

void selectionSortColsMatrixByColCriteria(Matrix m,
                                          int (*criteria)(int*, int));

bool isSquareMatrix(Matrix m);

bool areTwoMatricesEqual(Matrix m1, Matrix m2);

bool isEMatrix(Matrix m);

bool isSymmetricMatrix(Matrix m);

void transposeSquareMatrix(Matrix m);

void transposeMatrix(Matrix *m);

Position getMinValuePos(Matrix m);

Position getMaxValuePos(Matrix m);

Matrix createMatrixFromArray(const int *a, int nRows,
                             int nCols);

Matrix *createArrayOfMatrixFromArray(const int *values,
                                     size_t nMatrices, int nRows, int nCols);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_MATRIX_H
