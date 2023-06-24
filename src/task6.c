#include <stdlib.h>
#include <stdbool.h>

typedef struct MatrixIndex {
    int row;
    int column;
} MatrixIndex;

void findLongestZeroSubsequence(bool *arr, int size, int *begin, int *end) {
    int cLen = 0;
    int mLen = 0;
    int tmpBegin = 0;
    *begin = 0;
    *end = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i]) {
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

void getLine(bool **matrix, int k, int lineIndex, bool *line) {
    for (int j = 0; j < k; j++)
        line[j] = matrix[lineIndex][j];
}

void getColumn(bool **matrix, int n, int columnIndex, bool *line) {
    for (int j = 0; j < n; j++)
        line[j] = matrix[columnIndex][j];
}

void getDiagonalTopLeftToBottomRight(bool **matrix, int n, int k, int iStart, int jStart, bool *line, int *lineSize) {
    for (int i = iStart, j = jStart; i < n && j < k; i++, j++)
        line[(*lineSize)++] = matrix[i][j];
}

void processLine(bool **matrix, int k, int lineIndex, MatrixIndex *longestZeroSubsequenceBegin,
                 MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize, bool *buf) {
    getLine(matrix, k, lineIndex, buf);

    int indexBegin, indexEnd;
    findLongestZeroSubsequence(buf, k, &indexBegin, &indexEnd);

    int subSequenceSize = indexEnd - indexBegin;
    if (subSequenceSize > *maxSubsequenceSize) {
        *maxSubsequenceSize = subSequenceSize;
        *longestZeroSubsequenceBegin = (MatrixIndex) {lineIndex, indexBegin};
        *longestZeroSubsequenceEnd = (MatrixIndex) {lineIndex, indexEnd};
    }
}

void processColumn(bool **matrix, int n, int columnIndex, MatrixIndex *longestZeroSubsequenceBegin,
                   MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize, bool *buf) {
    getColumn(matrix, n, columnIndex, buf);

    int indexBegin, indexEnd;
    findLongestZeroSubsequence(buf, n, &indexBegin, &indexEnd);

    int subSequenceSize = indexEnd - indexBegin;
    if (subSequenceSize > *maxSubsequenceSize) {
        *maxSubsequenceSize = subSequenceSize;
        *longestZeroSubsequenceBegin = (MatrixIndex) {indexBegin, columnIndex};
        *longestZeroSubsequenceEnd = (MatrixIndex) {indexEnd, columnIndex};
    }
}

void processDiagonalTopLeftToBottomRight(bool **matrix, int n, int k, int row, int column,
                                         MatrixIndex *longestZeroSubsequenceBegin,
                                         MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize, bool *buf) {
    int bufSize;
    getDiagonalTopLeftToBottomRight(matrix, n, k, row, column, buf, &bufSize);

    int indexBegin, indexEnd;
    findLongestZeroSubsequence(buf, bufSize, &indexBegin, &indexEnd);

    int subSequenceSize = indexEnd - indexBegin;
    if (subSequenceSize > *maxSubsequenceSize) {
        *maxSubsequenceSize = subSequenceSize;
        *longestZeroSubsequenceBegin = (MatrixIndex) {row, column};
        *longestZeroSubsequenceEnd = (MatrixIndex) {row + subSequenceSize, column + subSequenceSize};
    }
}

void findLongestZeroLineInMatrix(bool **matrix, int n, int k) {
    bool *buf = malloc(sizeof(bool) * n * k);
    int maxSubsequenceSize = 0;
    MatrixIndex longestZeroSubsequenceBegin = {0, 0};
    MatrixIndex longestZeroSubsequenceEnd = {0, 0};

    // Сначала пройдёмся по строчкам
    for (int i = 0; i < n; i++) {
        processLine(matrix, k, i, &longestZeroSubsequenceBegin, &longestZeroSubsequenceEnd, &maxSubsequenceSize, buf);
        // Для каждой строчки здесь же будем находить диагональ слева сверху до нижней правой части с левого края матрицы
        processDiagonalTopLeftToBottomRight(matrix, n, k, i, 0, &longestZeroSubsequenceBegin,
                                            &longestZeroSubsequenceEnd, &maxSubsequenceSize, buf);
    }

    // Потом пройдёмся по столбцам
    for (int i = 0; i < k; i++) {
        processColumn(matrix, n, i, &longestZeroSubsequenceBegin, &longestZeroSubsequenceEnd, &maxSubsequenceSize, buf);

        // Для каждого столбца будем находить диагональ слева сверху до нижней правой части с верхнего края матрицы
        processDiagonalTopLeftToBottomRight(matrix, n, k, 0, i, &longestZeroSubsequenceBegin,
                                            &longestZeroSubsequenceEnd, &maxSubsequenceSize, buf);
    }

    free(buf);
}