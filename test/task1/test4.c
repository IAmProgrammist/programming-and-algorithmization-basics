#include "task1.h"

int main() {
    float a = 1.5f;
    float b = -6;
    float c = -14.0f / 3;
    float expectedX1 = 14.0f / 3;
    float expectedX2 = -2.0f / 3;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ASSERT_ROOTS(a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}