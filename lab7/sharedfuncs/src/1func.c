#include "1func.h"

#define OCT_BLOCK_BINARY_SIZE 3
#define OCT_FULL_BLOCK 7ll
#define LONG_LONG_BIT_SIZE (8 * sizeof(unsigned long long))

char getOctDigit(unsigned long long x, int at) {
    return (x >> (LONG_LONG_BIT_SIZE - 1 - at)) & OCT_FULL_BLOCK;
}

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