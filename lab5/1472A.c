#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int currentTask = 0; currentTask < taskAmount; currentTask++) {
        int paperWidth, paperHeight, requiredPostcardsAmount;
        scanf("%d %d %d", &paperWidth, &paperHeight, &requiredPostcardsAmount);

        int maxCardsAmount = 1;

        while (paperWidth % 2 == 0) {
            paperWidth /= 2;
            maxCardsAmount *= 2;
        }

        while (paperHeight % 2 == 0) {
            paperHeight /= 2;
            maxCardsAmount *= 2;
        }

        if (maxCardsAmount >= requiredPostcardsAmount)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}