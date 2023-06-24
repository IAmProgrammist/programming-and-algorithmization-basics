void sum(unsigned int **numbers, int m, int n, int q, unsigned int *ans) {
    unsigned int nextRank = 0;

    // Будем идти с конца чисел
    for (int digitIndex = n - 1; digitIndex >= 0; digitIndex--) {
        // Посчитаем сумму цифр. Сумме цифр сразу присваиваем перенос из предыдущего разряда.
        unsigned int sum = nextRank;

        // Из каждого числа добавляем цифру
        for (int numIndex = 0; numIndex < m; numIndex++)
            sum += numbers[numIndex][digitIndex];

        // В текущий разряд записываем остаток от суммы
        ans[digitIndex] = sum % q;
        // В следующий разряд переносим целочисленное деление
        nextRank = sum / q;
    }
}