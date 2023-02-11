#include <stdio.h>

#define START_POS_X 1
#define START_POS_Y 1

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int fieldWidth, fieldHeight, expectedGurgles;
        scanf("%d %d %d", &fieldWidth, &fieldHeight, &expectedGurgles);

        int actualGurgles = (fieldWidth - START_POS_X) + fieldWidth * (fieldHeight - START_POS_Y);
        if (actualGurgles == expectedGurgles)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}