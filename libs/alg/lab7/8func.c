#include "../alg.h"

void cycleShift(unsigned long long *pX, int k) {
    if (*pX == 0)
        return;

    while (k--) {
        unsigned long long copyX = *pX;
        *pX = 0;
        int pow = 1;

        while (copyX & (~1)) {
            *pX += (copyX & 1) << pow;
            copyX >>= 1;
            pow++;
        }

        *pX += 1;
    }
}