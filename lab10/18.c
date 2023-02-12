#include <stdio.h>
#include <stdlib.h>

int numComparator(const void *a, const void *b) {
    if (*((long long *) a) > *((long long *) b)) return 1;
    if (*((long long *) a) < *((long long *) b)) return -1;
    return 0;
}

long long max(long long a, long long b) {
    return a > b ? a : b;
}

long long min(long long a, long long b) {
    return a < b ? a : b;
}

int main() {
    long long heroesAmount;
    scanf("%lld", &heroesAmount);

    long long *heroesPower = (long long *) malloc(sizeof(long long) * heroesAmount);
    long long totalHeroPower = 0;
    for (long long i = 0; i < heroesAmount; i++) {
        scanf("%lld", heroesPower + i);

        totalHeroPower += heroesPower[i];
    }

    qsort(heroesPower, heroesAmount, sizeof(heroesPower[0]), numComparator);

    int dragonsAmount;
    scanf("%d", &dragonsAmount);

    for (int i = 0; i < dragonsAmount; i++) {
        long long defendingDragonPower, attackingDragonPower;
        scanf("%lld %lld", &defendingDragonPower, &attackingDragonPower);

        long long left = -1;
        long long right = heroesAmount;
        while (right - left > 1) {
            long long middle = left + (right - left) / 2;

            if (heroesPower[middle] < defendingDragonPower)
                left = middle;
            else
                right = middle;
        }

        long long totalMoneySpent;
        if (left == -1)
            totalMoneySpent = max(0, defendingDragonPower - heroesPower[right]) +
                              max(0, attackingDragonPower - (totalHeroPower - heroesPower[right]));
        else if (right == heroesAmount)
            totalMoneySpent = max(0, defendingDragonPower - heroesPower[left]) +
                              max(0, attackingDragonPower - (totalHeroPower - heroesPower[left]));
        else
            totalMoneySpent = min(max(0, defendingDragonPower - heroesPower[right]) +
                                  max(0, attackingDragonPower - (totalHeroPower - heroesPower[right])),
                                  max(0, defendingDragonPower - heroesPower[left]) +
                                  max(0, attackingDragonPower - (totalHeroPower - heroesPower[left])));

        printf("%lld\n", totalMoneySpent);
    }

    free(heroesPower);

    return 0;
}


