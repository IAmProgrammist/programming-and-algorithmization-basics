#include <stdio.h>

long long ceilFrac(long long a, long long b) {
    return a % b ? a / b + 1 : a / b;
}

int main() {
    long long points, square;
    scanf("%lld %lld", &points, &square);

    long long maxHeight = ceilFrac(square, points);

    printf("%lld", maxHeight);

    return 0;
}