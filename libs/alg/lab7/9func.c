#include "../alg.h"

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