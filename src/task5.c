#include <stddef.h>
#include <stdlib.h>

#include "Tasks.h"

typedef struct JosephProblemMatrix {
    int **matrix;
    int n;
} JosephProblemMatrix;

static JosephProblemMatrix createJosephProblemMatrix(int nn) {
    // Сформируем матрицу таким образом, что res[i][j] содержит номер "выжившего"
    // При этом i - изначальное количество людей в круге, j - шаг с которым будут
    // Казнить людей.

    int **res = malloc(nn * sizeof(int *));

    for (int i = 0; i < nn; i++)
        res[i] = malloc(sizeof(int) * nn);

    if (nn <= 0)
        return (JosephProblemMatrix) {NULL, 0};

    // Логично предположить что в круге из одного человека при любом шаге
    // он будет победителем. Так и делаем, всю первую строку матрицы
    // инициализируем единицей
    for (int i = 0; i < nn; i++)
        res[0][i] = 1;

    for (int m = 1; m <= nn; m++)
        // Теперь попробуем рассчитать победителя для конкретной ячейки
        // Допустим, мы казним одного человека. В итоге в круге останется
        // n - 1 человек. Шаг мы тоже знаем - m, значит нам остаётся только
        // вычислить победителя на основе информации о номере человека выжившем при кол-ве
        // людей меньше на 1 с тем же шагом.
        for (int n = 1; n < nn; n++) {
            res[n][m - 1] = (m + res[n - 1][m - 1] - 1) % (n + 1) + 1;
        }

    // Возвращаем матрицу
    return (JosephProblemMatrix) {res, nn};
}

void freeJosephProblemMatrix(JosephProblemMatrix matrix) {
    for (int i = 0; i < matrix.n; i++)
        free(matrix.matrix[i]);

    free(matrix.matrix);
}

int josephProblemFindSurvivor(int n, int m) {
    // Получаем матрицу
    JosephProblemMatrix matrix = createJosephProblemMatrix(n);

    int res = -1;
    if (matrix.matrix != NULL) {
        int indexM = (m - 1) % n;
        // Получаем результат для конкретной ячейки
        res = matrix.matrix[n - 1][indexM];
    }

    // Удаляем матрицу
    freeJosephProblemMatrix(matrix);

    // Возвращаем рзультат
    return res;
}

int josephProblemFindMForSurvivorOne(int n) {
    int m = -1;

    // Здесь просто переберём все возможные шаги
    for (int i = 2; i <= n; i++)
        if (josephProblemFindSurvivor(n, i) == 1)
            m = i;

    return m;
}