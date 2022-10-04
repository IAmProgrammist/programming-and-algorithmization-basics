#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int firstMoneyTypeAmount, firstMoneyTypeValue, secondMoneyTypeAmount, requiredValue;
        scanf("%d %d %d %d", &firstMoneyTypeAmount, &secondMoneyTypeAmount,
              &firstMoneyTypeValue, &requiredValue);

        int firstMoneyTypeRequired = min(firstMoneyTypeAmount, requiredValue / firstMoneyTypeValue);
        requiredValue -= firstMoneyTypeRequired * firstMoneyTypeValue;

        if (requiredValue > secondMoneyTypeAmount)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}