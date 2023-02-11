#include "10func.h"

#define BYTE_FULL_BLOCK 255
#define BYTE_BLOCK_LEN 8

/** <p>Заголовок: <code>unsigned long long getInvertedByte(unsigned long long x)</code></p>
 * <p>Назначение: возвращает преобразованное значение <code>x</code> переставляя в обратном порядке байты значения <code>x</code> в обратном порядке</p>
 * @param x значение
 * @return преобразованное число <code>x</code>, в котором удаляется каждая вторая цифра в двоичной записи числа, начиная со старших цифр.
 */
unsigned long long getInvertedByte(unsigned long long x) {
    unsigned long long reversedByteNumber = 0;

    while (x) {
        reversedByteNumber = (reversedByteNumber << BYTE_BLOCK_LEN) + (x & BYTE_FULL_BLOCK);
        x >>= BYTE_BLOCK_LEN;
    }

    return reversedByteNumber;
}