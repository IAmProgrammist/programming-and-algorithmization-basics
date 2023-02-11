#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int primeNumbersAmount = number / 2;
    int isOdd = number % 2;

    printf("%d\n", primeNumbersAmount);

    for (int i = isOdd; i < primeNumbersAmount; i++)
        printf("2 ");

    if (isOdd)
        printf("3");

    return 0;
}