#include "../alg.h"

bool isPrimeHard(int n) {
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool isPrimeSqrt(int n) {
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool isPrimeSqrtHalf(int n) {
    if (n % 2 == 0 || n == 1)
        return n == 2 || false;

    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}