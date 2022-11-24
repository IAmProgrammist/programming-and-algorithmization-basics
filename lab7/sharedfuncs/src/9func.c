#include "9func.h"

/** <p>Заголовок: <code>unsigned long long removeEverySecondDigit(unsigned long long x)</code></p>
 * <p>Назначение: возвращает преобразованное число <code>x</code>, в котором удаляется каждая вторая цифра в двоичной записи числа, начиная со старших цифр.</p>
 * @param x число в котором будет удаляться каждая вторая цифра в двоичной записи
 * @return преобразованное число <code>x</code>, в котором удаляется каждая вторая цифра в двоичной записи числа, начиная со старших цифр.
 */
unsigned long long removeEverySecondDigit(unsigned long long x) {
    unsigned long long variantA = 0, variantB = 0;

    int i;
    for (i = 0; x; x >>= 1, i++) {
        unsigned long long digit = x & 1;

        if (i & 1)
            variantA += digit << (i >> 1);
        else
            variantB += digit << (i >> 1);
    }

    if (i & 1)
        return variantB;
    else
        return variantA;
}