#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int currentTask = 0; currentTask < taskAmount; currentTask++) {
        int numbersAmount;
        scanf("%d", &numbersAmount);

        int oddCount = 0;

        for (int currentNumber = 0; currentNumber < 2 * numbersAmount; currentNumber++) {
            int number;
            scanf("%d", &number);

            if (number % 2)
                oddCount++;
        }

        if (oddCount == numbersAmount)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}