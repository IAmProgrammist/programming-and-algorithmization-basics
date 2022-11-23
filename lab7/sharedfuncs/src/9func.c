#include "9func.h"

unsigned long long removeEverySecondDigit(unsigned long long x) {
    unsigned long long variantA = 0, variantB = 0;

    int i;
    for (i = 0; i < 8 * sizeof(x) && (x >> i); i++) {
        int digit = ((x >> i) % 2);

        if (i % 2)
            variantA += digit << (i / 2);
        else
            variantB += digit << (i / 2);
    }

    if (i % 2)
        return variantB;
    else
        return variantA;
}