#include <stdio.h>

int main() {
    int number, digit, requiredDigitCount;
    scanf("%d %d %d", &number, &digit, &requiredDigitCount);

    int actualDigitCount = 0;

    while (number != 0) {
        if (number % 10 == digit)
            actualDigitCount++;

        number /= 10;
    }

    if (actualDigitCount == requiredDigitCount)
        printf("YES");
    else
        printf("NO");

    return 0;
}