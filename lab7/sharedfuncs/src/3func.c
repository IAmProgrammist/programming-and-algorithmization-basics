#include "3func.h"

void swapPairBytes(unsigned long long *a) {
    for (int currentPair = 0; ((*a) >> currentPair) > 1ull && currentPair != 8 * sizeof(*a); currentPair += 2) {
        unsigned long long currentBitsMask = 3ll << currentPair;
        unsigned long long currentBitsPair = (*a) & currentBitsMask;

        if (!(currentBitsPair == 0 || (currentBitsPair ^ currentBitsMask) == 0)) {
            *a = ((*a) & (~currentBitsMask)) | ((~currentBitsPair) & currentBitsMask);
        }
    }
}