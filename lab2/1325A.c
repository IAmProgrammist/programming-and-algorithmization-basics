#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int numberX;
        scanf("%d", &numberX);

        int numberB = numberX - 1;

        printf("%d %d\n", 1, numberB);
    }

    return 0;
}