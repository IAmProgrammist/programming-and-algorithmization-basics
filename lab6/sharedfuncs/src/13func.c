#include "13func.h"

/**
 * <p>Заголовок: <code>bool isPrimeHard(int n)</code>.</p>
 * <p>Назначение: определяет, является ли <code>n</code> простым числом. Алгоритмическая сложность - O(n)</p>
 * @param n число вид которого определяет функция
 * @return true если <code>n</code> - простое число
 * @return false если <code>n</code> - сложное число
 */
bool isPrimeHard(int n) {
    if (n == 1) return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

/**
 * <p>Заголовок: <code>bool isPrimeSqrt(int n)</code>.</p>
 * <p>Назначение: определяет, является ли <code>n</code> простым числом. Алгоритмическая сложность - O(sqrt(n))</p>
 * @param n число вид которого определяет функция
 * @return true если <code>n</code> - простое число
 * @return false если <code>n</code> - сложное число
 */
bool isPrimeSqrt(int n) {
    if (n == 1) return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

/**
 * <p>Заголовок: <code>bool isPrimeSqrtHalf(int n)</code>.</p>
 * <p>Назначение: определяет, является ли <code>n</code> простым числом. Алгоритмическая сложность - O(sqrt(n))</p>
 * @param n число вид которого определяет функция
 * @return true если <code>n</code> - простое число
 * @return false если <code>n</code> - сложное число
 */
bool isPrimeSqrtHalf(int n) {
    if (n % 2 == 0 || n == 1) return false || n == 2;

    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}