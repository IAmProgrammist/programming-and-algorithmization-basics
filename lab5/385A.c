#include <stdio.h>

long long max3(long long a, long long b, long long c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    return c;
}

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

        maxProfit = max3(previousDayPrice - currentDayPrice - raspberryKilosForBorrowing, maxProfit, 0);
    }

    printf("%d", maxProfit);

    return 0;
}