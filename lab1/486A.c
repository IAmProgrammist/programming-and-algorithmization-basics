#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long sum = (n / 2) - n * (n % 2 != 0);

    printf("%lld", sum);

    return 0;
}