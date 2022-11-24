#include "15func.h"

/**
 * <p>Заголовок: <code>int reverseNum(int n)</code></p>
 * <p>Назначение: возвращает число <code>n</code> в обратном порядке
 * @param n значение которое переворачивает функция
 * @return возвращает перевёрнутое значение <code>n</code>
 */
int reverseNum(int n) {
    int reversedNum = 0;

    while (n > 0) {
        reversedNum = 10 * reversedNum + n % 10;
        n /= 10;
    }

    return reversedNum;
}

/**
 * <p>Заголовок: <code>bool isNumberPalindrome(int n)</code></p>
 * <p>Назначение: возвращает “истина” если <code>n</code> – палиндром, иначе – “ложь”.
 * @return true, если <code>n</code> - палиндром
 * @return false, если <code>n</code> - не палиндром
 */
bool isNumberPalindrome(int n) {
    return n == reverseNum(n);
}

/**
 * <p>Заголовок: <code>int countPalindromeNumbers(int n)</code></p>
 * <p>Назначение: возвращает количество чисел-палиндромов от 1 до <code>n</code> включительно
 * @param n значение до которого будут проверяться палиндромы
 * @return количество палиндромов от 1 до <code>n</code> включительно
 */
int countPalindromeNumbers(int n) {
    int palindromeCounter = 0;

    for (int i = 1; i <= n; i++)
        if (isNumberPalindrome(i))
            palindromeCounter++;

    return palindromeCounter;
}