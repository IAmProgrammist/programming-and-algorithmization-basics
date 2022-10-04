#include <stdio.h>

long long ceilDiv(long long dividend, long long divisor) {
    return dividend / divisor + (dividend % divisor != 0);
}

int main() {
    long long squareWidth, squareHeight, flagstoneSize;
    scanf("%lld %lld %lld", &squareWidth, &squareHeight, &flagstoneSize);

    long long flagstoneAmount = ceilDiv(squareWidth, flagstoneSize) *
            ceilDiv(squareHeight, flagstoneSize);

    printf("%lld", flagstoneAmount);

    return 0;
}