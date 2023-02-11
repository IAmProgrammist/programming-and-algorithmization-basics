#include <stdio.h>

int main() {
    int numberAmount, addNumber;
    scanf("%d %d", &numberAmount, &addNumber);

    int number;
    scanf("%d", &number);

    int previousNumber = number;
    int addTimesTotal = 0;

    for (int currentNumber = 1; currentNumber < numberAmount; currentNumber++) {
        scanf("%d", &number);

        int deltaNumbers = previousNumber - number;

        if (deltaNumbers >= 0) {
            int addTimes = deltaNumbers / addNumber + 1;
            number += addTimes * addNumber;
            addTimesTotal += addTimes;
        }

        previousNumber = number;
    }

    printf("%d", addTimesTotal);

    return 0;
}