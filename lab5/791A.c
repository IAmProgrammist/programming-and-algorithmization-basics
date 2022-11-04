#include <stdio.h>

int main() {
    int weightLimak, weightBob;
    scanf("%d %d", &weightLimak, &weightBob);

    int fullYearsToBecomeLarger = 0;

    while (weightLimak <= weightBob) {
        weightLimak *= 3;
        weightBob *= 2;
        fullYearsToBecomeLarger++;
    }

    printf("%d", fullYearsToBecomeLarger);

    return 0;
}