#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        long long candiesPileA, candiesPileB, candiesPileC;
        scanf("%lld %lld %lld", &candiesPileA, &candiesPileB, &candiesPileC);

        long long candiesForBobAndAlice = (candiesPileA + candiesPileB + candiesPileC) / 2;

        printf("%lld\n", candiesForBobAndAlice);
    }

    return 0;
}