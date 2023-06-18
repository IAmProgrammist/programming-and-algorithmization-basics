#include <math.h>

void solveSquareEquation(float a, float b, float c, float *x1, float *x2) {
    float sqrtD = sqrtf(b * b - 4 * a * c);
    *x1 = (-b + sqrtD) / (2 * a);
    *x2 = (-b - sqrtD) / (2 * a);
}