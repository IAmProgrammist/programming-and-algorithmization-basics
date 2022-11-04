#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    int implementedProblems = 0;

    for (int currentTask = 0; currentTask < taskAmount; currentTask++) {
        int viewPetya, viewVasya, viewTonya;
        scanf("%d %d %d", &viewPetya, &viewVasya, &viewTonya);

        int viewTotal = viewPetya + viewVasya + viewTonya;
        implementedProblems += viewTotal / 2;
    }

    printf("%d", implementedProblems);

    return 0;
}