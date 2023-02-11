#include "../alg.h"

bool isBinPoly(unsigned long long x) {
    unsigned long long copyX = x;
    unsigned long long reversedX = 0;

    while (copyX > 0) {
        reversedX = (reversedX << 1) + (copyX & 1);
        copyX >>= 1;
    }

    return x == reversedX;
}