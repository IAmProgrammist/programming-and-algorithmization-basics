#include "../alg.h"

int gorner(const int * const coefficients, int cSize, int x) {
    if (cSize == 1)
        return coefficients[0] * x;
    else
        return coefficients[0] + x * gorner(coefficients + 1, cSize - 1, x);
}