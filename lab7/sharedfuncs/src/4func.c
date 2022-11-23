#include "4func.h"

#define HEX_FULL_BLOCK 15
#define HEX_BLOCK_LEN 4

void invertHex(unsigned long long *x) {
    unsigned long long reversedX = 0;

    while (*x > 0) {
        reversedX = (reversedX << HEX_BLOCK_LEN) + (*x & HEX_FULL_BLOCK);
        *x >>= HEX_BLOCK_LEN;
    }

    *x = reversedX;
}