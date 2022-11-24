#include "10func.h"

#define BYTE_FULL_BLOCK 255
#define BYTE_BLOCK_LEN 8

unsigned long long getInvertedByte(unsigned long long x) {
    unsigned long long reversedByteNumber = 0;

    while (x) {
        reversedByteNumber = (reversedByteNumber << BYTE_BLOCK_LEN) + (x & BYTE_FULL_BLOCK);
        x >>= BYTE_BLOCK_LEN;
    }

    return reversedByteNumber;
}