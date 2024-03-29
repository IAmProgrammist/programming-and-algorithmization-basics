#include "../alg.h"

int getMaximumLength(unsigned long long x) {
    int maxLen = 0;
    int currLen = 0;

    while (x) {
        if (x & 1) {
            currLen += 1;

            if (currLen > maxLen)
                maxLen = currLen;
        } else
            currLen = 0;

        x >>= 1;
    }

    return maxLen;
}