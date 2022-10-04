#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int gurgles; // gurgle = "бульк", rubles = "рубли", gurgle + rubles = gurgles (gurbles? rugles?)
        scanf("%d", &gurgles);

        int sameAmountOfEachCoin = gurgles / 3;
        int amountOfCoinsByOne = sameAmountOfEachCoin + (gurgles % 3 == 1);
        int amountOfCoinsByTwo = sameAmountOfEachCoin + (gurgles % 3 == 2);

        printf("%d %d\n", amountOfCoinsByOne, amountOfCoinsByTwo);
    }

    return 0;
}