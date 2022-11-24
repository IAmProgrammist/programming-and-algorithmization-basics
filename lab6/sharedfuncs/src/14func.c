#include "14func.h"

/**
 * <p>Заголовок: <code>bool isNumberPerfect(int n)</code></p>
 * <p>Назначение: возвращает “истина” если <code>n</code> - совершенное число, иначе – “ложь”.
 * @param n значение вид которого определяет функция
 * @return true если <code>n</code> - совершенное число
 * @return false если <code>n</code> - несовершенное число
 */
bool isNumberPerfect(int n) {
    int dividersSum = 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            dividersSum += i;
        if (dividersSum > n) return false;
    }

    return n == dividersSum;
}

/**
 * <p>Заголовок: <code>void printPerfectNumbers(int n)</code></p>
 * <p>Назначение: выводит все совершенные числа от 1 до <code>n</code> включительно
 * @param n значение до которого будут искаться совершенные числа
 */
void printPerfectNumbers(int n) {
    for (int i = 1; i <= n; i++)
        if (isNumberPerfect(i))
            printf("%d\n", i);

    printf("\n");
}