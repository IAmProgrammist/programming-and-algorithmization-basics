#include "16func.h"

/**
 * <p>Заголовок: <code>int sumDigits(int n)</code></p>
 * <p>Назначение: подсчитывает сумму цифр значения <code>n</code>
 * @param n значение цифры которого будут суммироваться
 * @return сумму цифр значения <code>n</code>
 */
int sumDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

/**
 * <p>Заголовок: <code>bool isTicketHappy(int ticket)</code></p>
 * <p>Назначение: определяет, является ли счастливым билет по его номеру <code>ticket</code>
 * @param ticket номер билета
 * @return true, если билет счастливый
 * @return false, если билет обычный
 */
bool isTicketHappy(int ticket) {
    int leftPair = ticket / 1000;
    int rightPair = ticket % 1000;

    return sumDigits(leftPair) == sumDigits(rightPair);
}
