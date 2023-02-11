#include "7func.h"

#define DIGIT_LOWER_BOUND '0'
#define DIGIT_UPPER_BOUND '9'

/**
 * <p>Заголовок: <code>bool isDigit(int x)</code>.</p>
 * <p>Назначение: возвращает “истина”, если символ <code>x</code> является цифрой, иначе – “ложь”
 * @param x символ, проверяемый на то, является ли он цифрой.
 * @return true если <code>x</code> - иифра
 * @return false если <code>x</code> - не цифра
 */
bool isDigit(char x) {
    return x >= DIGIT_LOWER_BOUND && x <= DIGIT_UPPER_BOUND;
}