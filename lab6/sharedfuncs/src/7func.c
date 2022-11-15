#include "7func.h"

#define DIGIT_LOWER_BOUND '0'
#define DIGIT_UPPER_BOUND '9'

/**
 * <p>Заголовок: <code>bool isDigit(int x)</code>.</p>
 * <p>Назначение: Возвращает true если символ <code>x</code> является цифрой, иначе - false.
 * @param x символ, проверяемый на то, является ли он цифрой.
 */
bool isDigit(int x) {
    return x >= DIGIT_LOWER_BOUND && x <= DIGIT_UPPER_BOUND;
}