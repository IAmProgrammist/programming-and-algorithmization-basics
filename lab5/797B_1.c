#include <stdio.h>

#define NOT_INITED 0

long long max(long long a, long long b) {
    return a > b ? a : b;
}

int main() {
    int numbersAmount;
    scanf("%d", &numbersAmount);

    int oddSum = 0;
    int minPositiveOdd = NOT_INITED;
    int maxNegativeOdd = NOT_INITED;

    for (int currentNumber = 0; currentNumber < numbersAmount; currentNumber++) {
        int number;
        scanf("%d", &number);

        if (number > 0)
            oddSum += number;

        if (number % 2 != 0) {
            if (number > 0 && (number < minPositiveOdd || minPositiveOdd == NOT_INITED))
                minPositiveOdd = number;
            else if (number < 0 && (number > maxNegativeOdd || maxNegativeOdd == NOT_INITED))
                maxNegativeOdd = number;
        }
    }

    if (oddSum % 2 == 0) {
        if (minPositiveOdd != NOT_INITED && maxNegativeOdd != NOT_INITED)
            oddSum = max(oddSum - minPositiveOdd, oddSum + maxNegativeOdd);
        else if (minPositiveOdd != NOT_INITED)
            oddSum -= minPositiveOdd;
        else
            oddSum += maxNegativeOdd;
    }

    printf("%d", oddSum);

    return 0;
}