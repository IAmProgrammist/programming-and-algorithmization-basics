#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        long long singleDonutPrice, amountOfDonutsInBox, priceOfDonutsBox;
        scanf("%lld %lld %lld", &singleDonutPrice, &amountOfDonutsInBox, &priceOfDonutsBox);

        long long donutsForFirstShop;
        if (singleDonutPrice < priceOfDonutsBox)
            donutsForFirstShop = 1;
        else
            donutsForFirstShop = -1;

        long long donutsForSecondShop;
        if (priceOfDonutsBox < singleDonutPrice * amountOfDonutsInBox)
            donutsForSecondShop = amountOfDonutsInBox;
        else
            donutsForSecondShop = -1;

        printf("%lld %lld\n", donutsForFirstShop, donutsForSecondShop);
    }

    return 0;
}