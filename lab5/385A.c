#include <stdio.h>

long long max(long long a, long long b) {
    return a > b ? a : b;
}

int main() {
    int daysAmount, raspberryKilosForBorrowing;
    scanf("%d %d", &daysAmount, &raspberryKilosForBorrowing);

    int previousDayPrice, currentDayPrice;
    scanf("%d %d", &previousDayPrice, &currentDayPrice);

    int maxProfit = max(0, previousDayPrice - currentDayPrice - raspberryKilosForBorrowing);

    for (int currentDay = 2; currentDay < daysAmount; currentDay++) {
        previousDayPrice = currentDayPrice;

        scanf("%d", &currentDayPrice);

        int currentDayProfit = previousDayPrice - currentDayPrice - raspberryKilosForBorrowing;

        if (currentDayProfit > maxProfit)
            maxProfit = currentDayProfit;
    }

    printf("%d", maxProfit);

    return 0;
}