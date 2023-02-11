#include "4func.h"

#define HEX_FULL_BLOCK 15
#define HEX_BLOCK_LEN 4

/** <p>Заголовок: <code>void invertHex(unsigned long long *x)</code></p>
 * <p>Назначение: преобразует значение по адресу <code>x</code> переставляя в обратном порядке цифры значения по адресу <code>x</code> в обратном порядке в шестнадцатеричном представлении.</p>
 * @param x адрес по которому находится значение
 */
void invertHex(unsigned long long *x) {
    unsigned long long reversedX = 0;

    while (*x) {
        reversedX = (reversedX << HEX_BLOCK_LEN) + (*x & HEX_FULL_BLOCK);
        *x >>= HEX_BLOCK_LEN;
    }

    *x = reversedX;
}