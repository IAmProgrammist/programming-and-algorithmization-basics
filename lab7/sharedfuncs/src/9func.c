#include "9func.h"

unsigned long long removeEverySecondDigit(unsigned long long x) {
    unsigned long long variantA = 0, variantB = 0;

    int i;
    for (i = 0; x; x >>= 1, i++) {
        unsigned long long digit = x % 2;

        if (i % 2)
            variantA += digit << (i >> 1);
        else
            variantB += digit << (i >> 1);
    }

    if (i % 2)
        return variantB;
    else
        return variantA;
}