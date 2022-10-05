#include <stdio.h>

long long ceilFrac(long long a, long long b) {
    return a % b ? a / b + 1 : a / b;
}

int main() {
    long long squareWidth, squareHeight, flagstoneSize;
    scanf("%lld %lld %lld", &squareWidth, &squareHeight, &flagstoneSize);

    long long flagstoneAmount = ceilFrac(squareWidth, flagstoneSize) *
                                ceilFrac(squareHeight, flagstoneSize);

    printf("%lld", flagstoneAmount);

    return 0;
}