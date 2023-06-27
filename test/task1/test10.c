#include "task1.h"

int main() {
    float a = 2;
    float b = 6 * sqrtf(2);
    float c = 8;
    float expectedX1 = -sqrtf(2);
    float expectedX2 = -2 * sqrtf(2);

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ASSERT_ROOTS(a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}