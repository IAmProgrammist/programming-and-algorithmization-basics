#include "2func.h"

#define OCT_LAST_DIGIT_MASK 7

unsigned long long deleteOctNumber(unsigned long long x, int removeDigit) {
    unsigned long long resultNumber = 0;
    int pow = 0;

    while (x != 0) {
        int numDigit = x & OCT_LAST_DIGIT_MASK;

        if (numDigit != removeDigit) {
            resultNumber += (numDigit << (3 * pow));
            pow++;
        }

        x >>= 3;
    }

    return resultNumber;
}