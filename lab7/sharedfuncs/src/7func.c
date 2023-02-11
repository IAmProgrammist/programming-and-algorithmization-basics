#include "7func.h"

/** <p>Заголовок: <code>int getMaximumLength(unsigned long long x)</code></p>
 * <p>Назначение: возвращает максимальное количество подряд идущих единиц в двоичной записи числа <code>x</code>.</p>
 * @param x значение в котором будут подсчитываться подряд идущие единицы в двоичной записи
 * @return максимальное количество подряд идущих единиц в двоичной записи числа <code>x</code>.
 */
int getMaximumLength(unsigned long long x) {
    int maxLen = 0;
    int currLen = 0;

    while (x) {
        if (x & 1) {
            currLen += 1;

            if (currLen > maxLen)
                maxLen = currLen;
        } else
            currLen = 0;

        x >>= 1;
    }

    return maxLen;
}