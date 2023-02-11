#include "../alg.h"

bool isNumberPerfect(int n) {
    int dividersSum = 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            dividersSum += i;
        if (dividersSum > n) return false;
    }

    return n == dividersSum;
}

void printPerfectNumbers(int n) {
    for (int i = 1; i <= n; i++)
        if (isNumberPerfect(i))
            printf("%d\n", i);

    printf("\n");
}