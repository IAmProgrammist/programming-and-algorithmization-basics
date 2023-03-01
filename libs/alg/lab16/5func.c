#include "../alg.h"

bool isUnique(long long *a, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
                return false;

    return true;
}

long long getSum(int *a, int n) {
    long long sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}