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

        int addTimes;
        int deltaNumbers = previousNumber - number;

        if (deltaNumbers > 0) {
            addTimes = (previousNumber - number) / addNumber + 1;
        } else if (deltaNumbers < 0) {
            addTimes = 0;
        } else {
            addTimes = 1;
        }

        number += addTimes * addNumber;
        addTimesTotal += addTimes;
        previousNumber = number;
    }

    printf("%d", addTimesTotal);

    return 0;
}