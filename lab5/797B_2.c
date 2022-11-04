#include <stdio.h>

#define NOT_INITED 0

int main() {
    int numbersAmount;
    scanf("%d", &numbersAmount);

    int oddSum = NOT_INITED;
    int evenSum = 0;

    for (int currentNumber = 0; currentNumber < numbersAmount; currentNumber++) {
        int number;
        scanf("%d", &number);

        int oldEvenSum = evenSum;

        if (oddSum != NOT_INITED) {
            int addedSum = oddSum + number;

            if (addedSum % 2 && addedSum > oddSum) {
                oddSum = addedSum;
            } else if (addedSum % 2 == 0 && addedSum > evenSum) {
                evenSum = addedSum;
            }
        }

        int addedSum = oldEvenSum + number;

        if (addedSum % 2 && (addedSum > oddSum || oddSum == NOT_INITED)) {
            oddSum = addedSum;
        } else if (addedSum % 2 == 0 && addedSum > evenSum) {
            evenSum = addedSum;
        }
    }

    printf("%d", oddSum);

    return 0;
}