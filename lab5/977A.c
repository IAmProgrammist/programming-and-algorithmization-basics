#include <stdio.h>

long long min(long long a, long long b) {
    return a < b ? a : b;
}

int main() {
    int number, subtractionAmount;
    scanf("%d %d", &number, &subtractionAmount);

    while (subtractionAmount) {
        int subtractedAmount = min(number % 10, subtractionAmount);
        number -= subtractedAmount;
        subtractionAmount -= subtractedAmount;

        if (subtractionAmount) {
            number /= 10;
            subtractionAmount--;
        }
    }

    printf("%d", number);

    return 0;
}