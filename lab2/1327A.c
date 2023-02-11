#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        long long requiredSum, amountOfNumbers;
        scanf("%lld %lld", &requiredSum, &amountOfNumbers);

        if (amountOfNumbers * amountOfNumbers <= requiredSum && requiredSum % 2 == amountOfNumbers % 2)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}