#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int primeNumbersAmount = number / 2;

    printf("%d\n", primeNumbersAmount);

    for (int i = 0; i < primeNumbersAmount - 1; i++) {
        printf("2 ");
    }

    int lastPrimeNumber = 2 + number % 2;

    printf("%d", lastPrimeNumber);

    return 0;
}