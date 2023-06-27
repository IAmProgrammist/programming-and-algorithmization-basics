#include "task1.h"

int main() {
    float a = 3;
    float b = -1;
    float c = 0;
    float expectedX1 = 1.0f / 3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ASSERT_ROOTS(a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}