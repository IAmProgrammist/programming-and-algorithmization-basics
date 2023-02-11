#include "../alg.h"

#define UINT16_T_BIT_SIZE (8 * sizeof(uint16_t))

uint32_t getEvenOddCombination(uint16_t sh1, uint16_t sh2) {
    uint32_t evenOddCombination = 0;

    for (int i = 0; i < UINT16_T_BIT_SIZE; i++) {
        uint16_t mask = (uint16_t) 1 << (UINT16_T_BIT_SIZE - 1 - i);
        evenOddCombination = (evenOddCombination << 2) + ((!!(sh1 & mask) << 1) + !!(sh2 & mask));
    }

    return evenOddCombination;
}