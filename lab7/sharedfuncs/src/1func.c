#include "1func.h"

#define OCT_BLOCK_BINARY_SIZE 3
#define OCT_FULL_BLOCK 7ll
#define LONG_LONG_BIT_SIZE (sizeof(unsigned long long) << 3)

/** <p>Заголовок: <code>char getOctDigit(unsigned long long x, int at)</code></p>
 * <p>Назначение: возвращает цифру в восьмеричном виде числа <code>x</code> на позиции <code>at</code> с левого конца числа в двоичном коде.</p>
 * @param x значение в котором будет искаться цифра
 * @param at позиция цифры в числе <code>x</code>
 * @return цифру в восьмеричном виде числа <code>x</code> на позиции <code>at</code> с левого конца числа в двоичном коде.
 */
char getOctDigit(unsigned long long x, int at) {
    return (x >> (LONG_LONG_BIT_SIZE - 1 - at)) & OCT_FULL_BLOCK;
}

/** <p>Заголовок: <code>void printOct(unsigned long long x)</code></p>
 * <p>Назначение: выводит восьмеричное представление числа <code>x</code></p>
 * @param x значение которое нужно вывести в восьмеричной системе счисления
 */
void printOct(unsigned long long x) {
    if (x == 0) {
        printf("0\n");
        return;
    }

    int digitBit = 0;
    char digit;

    while (!(digit = getOctDigit(x, digitBit)))
        digitBit += OCT_BLOCK_BINARY_SIZE;

    while (digitBit < LONG_LONG_BIT_SIZE) {
        char currentDigit = getOctDigit(x, digitBit);
        digitBit += OCT_BLOCK_BINARY_SIZE;

        printf("%d", currentDigit);
    }

    printf("\n");
}