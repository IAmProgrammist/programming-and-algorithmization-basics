#include "matrix.h"

Matrix getMemMatrix(int nRows, int nCols) {
    int **values = (int **) malloc(sizeof(int *) * nRows);
    for (int i = 0; i < nRows; i++)
        values[i] = (int *) malloc(sizeof(int) * nCols);
    return (Matrix) {values, nRows, nCols};
}

Matrix *getMemArrayOfMatrices(int nMatrices, int nRows, int nCols) {
    Matrix *matrixArray = (Matrix *) malloc(sizeof(Matrix) * nMatrices);
    for (int i = 0; i < nMatrices; i++)
        matrixArray[i] = getMemMatrix(nRows, nCols);
    return matrixArray;
}

void freeMemMatrix(Matrix m) {
    for (int i = 0; i < m.nRows; i++)
        free(m.values[i]);
    free(m.values);
}

void freeMemMatrices(Matrix *ms, int nMatrices) {
    for (int i = 0; i < nMatrices; i++)
        freeMemMatrix(ms[i]);
    free(ms);
}

void inputMatrix(Matrix m) {
    for (int i = 0; i < m.nRows; i++)
        for (int j = 0; j < m.nCols; j++)
            scanf("%d", &m.values[i][j]);
}

void inputMatrices(Matrix *ms, int nMatrices) {
    for (int i = 0; i < nMatrices; i++)
        inputMatrix(ms[i]);
}

void outputMatrix(Matrix m) {
    for (int i = 0; i < m.nRows; i++) {
        for (int j = 0; j < m.nCols; j++)
            printf("%d ", m.values[i][j]);

        printf("\n");
    }
}

void outputMatrices(Matrix *ms, int nMatrices) {
    for (int i = 0; i < nMatrices; i++)
        outputMatrix(ms[i]);
}

void swapRows(Matrix m, int i1, int i2) {
    assert(i1 < m.nRows && i2 < m.nRows && i1 >= 0 && i2 >= 0);

    int *tRow = m.values[i1];
    m.values[i1] = m.values[i2];
    m.values[i2] = tRow;
}

void swapColumns(Matrix m, int j1, int j2) {
    assert(j1 < m.nCols && j2 < m.nCols && j1 >= 0 && j2 >= 0);

    for (int i = 0; i < m.nRows; i++) {
        int t = m.values[i][j1];
        m.values[i][j1] = m.values[i][j2];
        m.values[i][j2] = t;
    }
}

void insertionSortRowsMatrixByRowCriteria(Matrix m,
                                          int (*criteria)(int *, int)) {
    //Can't use sizeof(m.values[0][0])
    //because nCols or nRows can be 0
    int *keys = (int *) malloc(sizeof(int) * m.nRows);
    for (int i = 0; i < m.nRows; i++)
        keys[i] = criteria(m.values[i], m.nCols);

    for (int i = 0; i < m.nRows - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < m.nRows; j++)
            if (keys[j] < keys[minIndex])
                minIndex = j;

        swapRows(m, minIndex, i);
        int key = keys[i];
        keys[i] = keys[minIndex];
        keys[minIndex] = key;
    }

    free(keys);
}

void selectionSortColsMatrixByColCriteria(Matrix m,
                                          int (*criteria)(int *, int)) {
    int *keys = (int *) malloc(sizeof(int) * m.nCols);
    for (int i = 0; i < m.nCols; i++) {
        int *column = (int *) malloc(sizeof(int) * m.nRows);

        for (int j = 0; j < m.nRows; j++)
            column[j] = m.values[j][i];

        keys[i] = criteria(column, m.nRows);

        free(column);
    }

    for (int i = 0; i < m.nCols - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < m.nCols; j++)
            if (keys[j] < keys[minIndex])
                minIndex = j;

        swapColumns(m, minIndex, i);
        int key = keys[i];
        keys[i] = keys[minIndex];
        keys[minIndex] = key;
    }

    free(keys);
}

bool isSquareMatrix(Matrix m) {
    return m.nRows == m.nCols;
}

bool areTwoMatricesEqual(Matrix m1, Matrix m2) {
    if (m1.nRows != m2.nRows || m1.nCols != m2.nCols)
        return false;

    for (int i = 0; i < m1.nRows; i++)
        if(memcmp(m1.values[i], m2.values[i], sizeof(int) * m1.nCols))
            return false;

    return true;
}

bool isEMatrix(Matrix m) {
    if (!isSquareMatrix(m))
        return false;

    for (int i = 0; i < m.nRows; i++)
        for (int j = 0; j < m.nCols; j++)
            if ((i == j) != m.values[i][j])
                return false;

    return true;
}

bool isSymmetricMatrix(Matrix m) {
    if (!isSquareMatrix(m))
        return false;

    for (int i = 0; i < m.nRows; i++)
        for (int j = i + 1; j < m.nCols; j++)
            if (m.values[i][j] != m.values[j][i])
                return false;

    return true;
}

void transposeSquareMatrix(Matrix m) {
    assert(isSquareMatrix(m));

    for (int i = 0; i < m.nRows; i++)
        for (int j = i + 1; j < m.nCols; j++) {
            int t = m.values[i][j];
            m.values[i][j] = m.values[j][i];
            m.values[j][i] = t;
        }
}

void transposeMatrix(Matrix *m) {
    Matrix newMatrix = getMemMatrix(m->nCols, m->nRows);

    for (int i = 0; i < m->nRows; i++)
        for (int j = 0; j < m->nCols; j++)
            newMatrix.values[i][j] = m->values[j][i];

    freeMemMatrix(*m);
    *m = newMatrix;
}

Position getMinValuePos(Matrix m) {
    assert(m.nRows >= 1 && m.nCols >= 1);
    int minValue = m.values[0][0];
    Position minValuePosition = {0, 0};

    for (int i = 0; i < m.nRows; i++)
        for (int j = 0; j < m.nCols; j++)
            if (m.values[i][j] < minValue) {
                minValue = m.values[i][j];
                minValuePosition = (Position) {i, j};
            }

    return minValuePosition;
}

Position getMaxValuePos(Matrix m) {
    assert(m.nRows >= 1 && m.nCols >= 1);
    int maxValue = m.values[0][0];
    Position maxValuePosition = {0, 0};

    for (int i = 0; i < m.nRows; i++)
        for (int j = 0; j < m.nCols; j++)
            if (m.values[i][j] > maxValue) {
                maxValue = m.values[i][j];
                maxValuePosition = (Position) {i, j};
            }

    return maxValuePosition;
}

Matrix createMatrixFromArray(const int *a, int nRows,
                             int nCols) {
    Matrix newMatrix = getMemMatrix(nRows, nCols);

    int k = 0;
    for (int i = 0; i < nRows; i++)
        for (int j = 0; j < nCols; j++)
            newMatrix.values[i][j] = a[k++];

    return newMatrix;
}

Matrix *createArrayOfMatrixFromArray(const int *values,
                                     size_t nMatrices, int nRows, int nCols) {
    Matrix *matrixArray = (Matrix *) malloc(sizeof(Matrix) * nMatrices);
    int k = 0;
    for (int i = 0; i < nMatrices; i++)
        matrixArray[i] = createMatrixFromArray(values + k * nRows * nCols, nRows, nCols);
    return matrixArray;
}