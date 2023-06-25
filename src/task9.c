void findX(double *matrixA, int n, double **matrixB, double **matrixX) {
    /*
    Здесь верхнетреугольная матрица matrixA

               {1, -2, 0}
     matrixA = {0, 4, 15} -> {1, -2, 0, 4, 17, 1}
               {0, 0, 1}

     */
    // Кол-во элементов в одной линии верхнетреугольной матрицы. Будем идти снизу-вверх и справа-налево по этой матрице
    int elementsAmountOnA = 1;
    // Общее количество элементов в упакованной верхнетреугольной матрице
    int totalCompressedMatrixElements = ((n + 1) * n) / 2;

    // Заполним матрицу нулями
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrixX[i][j] = 0;

    // Счётчик для линии
    for (int line = n - 1; line >= 0; line--) {

        // Индекс с которого будет начинаться упакованная верхнетреугольная матрица в line
        int matrixABegIndex = (elementsAmountOnA * (elementsAmountOnA - 1)) / 2;

        // Далее будем перебирать все элементы верхнетреугольной матрицы в этой линии
        for (int elementNumber = 0; elementNumber < elementsAmountOnA; elementNumber++)
            // Если мы достигли конца линии (самый левый элемент), значит мы может легко вычислить элемент из x
            if (elementNumber == elementsAmountOnA - 1)
                for (int j = 0; j < n; j++)
                    matrixX[line][j] =
                            (matrixB[line][j] - matrixX[line][j]) /
                            matrixA[totalCompressedMatrixElements - matrixABegIndex - 1 - elementNumber];
        // Иначе будем вычислять части массива X суммируя произведение текущего элемента упакованной матрицы и
        // элемента ниже.
        else
                for (int j = 0; j < n; j++)
                    matrixX[line][j] += matrixA[totalCompressedMatrixElements - matrixABegIndex - 1 - elementNumber] *
                            matrixX[n - 1 - elementNumber][j];

        // На следующей линии будет на 1 элемент больше
        elementsAmountOnA++;
    }
}