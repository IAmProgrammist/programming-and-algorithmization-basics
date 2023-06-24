#include <stdlib.h>
#include <stdbool.h>

#include "Tasks.h"

static void findLongestZeroSubsequence(bool *arr, int size, int *begin, int *end) {
    int cLen = 0;
    int mLen = 0;
    int tmpBegin = 0;
    *begin = 0;
    *end = 0;

    for (int i = 0; i < size; i++) {
        if (!arr[i]) {
            cLen++;

            if (cLen > mLen) {
                mLen = cLen;
                *begin = tmpBegin;
                *end = i + 1;
            }
        } else {
            tmpBegin = i + 1;
            cLen = 0;
        }
    }
}

static void getLine(bool **matrix, int k, int lineIndex, bool *line) {
    for (int j = 0; j < k; j++)
        line[j] = matrix[lineIndex][j];
}

static void getColumn(bool **matrix, int n, int columnIndex, bool *column) {
    for (int j = 0; j < n; j++)
        column[j] = matrix[j][columnIndex];
}

static void getDiagonalTopLeftToBottomRight(bool **matrix, int n, int k, int iStart, int jStart, bool *diagonal, int *diagonalSize) {
    for (int i = iStart, j = jStart; i < n && j < k; i++, j++)
        diagonal[(*diagonalSize)++] = matrix[i][j];
}

static void getDiagonalTopRightToBottomLeft(bool **matrix, int n, int k, int iStart, int jStart, bool *diagonal, int *diagonalSize) {
    for (int i = iStart, j = jStart; i < n && j >= 0; i++, j--)
        diagonal[(*diagonalSize)++] = matrix[i][j];
}

static void processLine(bool **matrix, int k, int lineIndex, MatrixIndex *longestZeroSubsequenceBegin,
                 MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize, bool *buf) {
    getLine(matrix, k, lineIndex, buf);

    int indexBegin, indexEnd;
    findLongestZeroSubsequence(buf, k, &indexBegin, &indexEnd);

    int subSequenceSize = indexEnd - indexBegin;
    if (subSequenceSize > *maxSubsequenceSize) {
        *maxSubsequenceSize = subSequenceSize;
        *longestZeroSubsequenceBegin = (MatrixIndex) {lineIndex, indexBegin};
        *longestZeroSubsequenceEnd = (MatrixIndex) {lineIndex, indexEnd - 1};
    }
}

static void processColumn(bool **matrix, int n, int columnIndex, MatrixIndex *longestZeroSubsequenceBegin,
                   MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize, bool *buf) {
    getColumn(matrix, n, columnIndex, buf);

    int indexBegin, indexEnd;
    findLongestZeroSubsequence(buf, n, &indexBegin, &indexEnd);

    int subSequenceSize = indexEnd - indexBegin;
    if (subSequenceSize > *maxSubsequenceSize) {
        *maxSubsequenceSize = subSequenceSize;
        *longestZeroSubsequenceBegin = (MatrixIndex) {indexBegin, columnIndex};
        *longestZeroSubsequenceEnd = (MatrixIndex) {indexEnd - 1, columnIndex};
    }
}

static void processDiagonalTopLeftToBottomRight(bool **matrix, int n, int k, int row, int column,
                                         MatrixIndex *longestZeroSubsequenceBegin,
                                         MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize, bool *buf) {
    int bufSize = 0;
    getDiagonalTopLeftToBottomRight(matrix, n, k, row, column, buf, &bufSize);

    int indexBegin, indexEnd;
    findLongestZeroSubsequence(buf, bufSize, &indexBegin, &indexEnd);

    int subSequenceSize = indexEnd - indexBegin;
    if (subSequenceSize > *maxSubsequenceSize) {
        *maxSubsequenceSize = subSequenceSize;
        *longestZeroSubsequenceBegin = (MatrixIndex) {row + indexBegin, column + indexBegin};
        *longestZeroSubsequenceEnd = (MatrixIndex) {row + indexBegin + subSequenceSize - 1, column + indexBegin + subSequenceSize - 1};
    }
}

static void processDiagonalTopRightToBottomLeft(bool **matrix, int n, int k, int row, int column,
                                         MatrixIndex *longestZeroSubsequenceBegin,
                                         MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize, bool *buf) {
    int bufSize = 0;
    getDiagonalTopRightToBottomLeft(matrix, n, k, row, column, buf, &bufSize);

    int indexBegin, indexEnd;
    findLongestZeroSubsequence(buf, bufSize, &indexBegin, &indexEnd);

    int subSequenceSize = indexEnd - indexBegin;
    if (subSequenceSize > *maxSubsequenceSize) {
        *maxSubsequenceSize = subSequenceSize;
        *longestZeroSubsequenceBegin = (MatrixIndex) {row + indexBegin, column - indexBegin};
        *longestZeroSubsequenceEnd = (MatrixIndex) {row + indexBegin + subSequenceSize - 1, column - indexBegin - subSequenceSize + 1};
    }
}

int max(int a, int b) {
    return a > b ? a : b;
}

void findLongestZeroLineInMatrix(bool **matrix, int n, int k, MatrixIndex *longestZeroSubsequenceBegin,
                                 MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize) {
    bool *buf = malloc(sizeof(bool) * max(n, k));
    *maxSubsequenceSize = 0;
    *longestZeroSubsequenceBegin = (MatrixIndex) {0, 0};
    *longestZeroSubsequenceEnd = (MatrixIndex) {0, 0};

    // Сначала пройдёмся по строчкам
    for (int i = 0; i < n; i++) {
        processLine(matrix, k, i, longestZeroSubsequenceBegin, longestZeroSubsequenceEnd, maxSubsequenceSize, buf);
        // Для каждой строчки здесь же будем находить диагональ слева сверху до нижней правой части с левого края матрицы
        processDiagonalTopLeftToBottomRight(matrix, n, k, i, 0, longestZeroSubsequenceBegin,
                                            longestZeroSubsequenceEnd, maxSubsequenceSize, buf);
        // И диагональ сверху справа до нижней левой части с правого края матрицы
        processDiagonalTopRightToBottomLeft(matrix, n, k, i, k - 1, longestZeroSubsequenceBegin,
                                            longestZeroSubsequenceEnd, maxSubsequenceSize, buf);
    }

    // Потом пройдёмся по столбцам
     for (int i = 0; i < k; i++) {
        processColumn(matrix, n, i, longestZeroSubsequenceBegin, longestZeroSubsequenceEnd, maxSubsequenceSize, buf);
        // Для каждого столбца будем находить оба вида диагоналей.
        processDiagonalTopLeftToBottomRight(matrix, n, k, 0, i, longestZeroSubsequenceBegin,
                                            longestZeroSubsequenceEnd, maxSubsequenceSize, buf);
        processDiagonalTopRightToBottomLeft(matrix, n, k, 0, i, longestZeroSubsequenceBegin,
                                            longestZeroSubsequenceEnd, maxSubsequenceSize, buf);
    }

    free(buf);
}