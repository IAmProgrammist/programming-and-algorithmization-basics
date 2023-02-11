#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int leftBound, rightBound, divisor;
        scanf("%d %d %d", &leftBound, &rightBound, &divisor);

        int minNumber;
        if (divisor < leftBound)
            minNumber = divisor;
        else
            minNumber = (rightBound / divisor + 1) * divisor;

        printf("%d\n", minNumber);
    }

    return 0;
}