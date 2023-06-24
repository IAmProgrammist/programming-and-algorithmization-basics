#include <stddef.h>

#include "Tasks.h"

void subtractMiddleOfLineFromEveryLine(double **matrix, int l, int m) {
    for (int i = 0; i < l; i++) {
        // Для каждой строчки высчитаем среднее.
        // Сначала высчитаем сумму
        double middle = 0;

        for (int j = 0; j < m; j++)
            middle += matrix[i][j];

        // После этого можем поделить сумму на m - кол-во элементов - и получить среднее
        middle /= m;

        // Остаётся только вычесть её из каждого элемента в строке
        for (int j = 0; j < m; j++)
            matrix[i][j] -= middle;
    }
}