#include <stdio.h>

int main() {
    int numberL, numberR;
    scanf("%d %d", &numberL, &numberR);

    if (numberL == numberR)
        printf("%d", numberL);
    else
        printf("2");

    return 0;
}