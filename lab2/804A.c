#include <stdio.h>

long long ceilFrac(long long a, long long b) {
    return a % b ? a / b + 1 : a / b;
}

int main() {
    int schoolsAmount;
    scanf("%d", &schoolsAmount);

    int ticketsTotalPrice = ceilFrac(schoolsAmount, 2) - 1;

    printf("%d", ticketsTotalPrice);

    return 0;
}