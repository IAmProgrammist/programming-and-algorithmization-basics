#include <stdio.h>

int main() {
    int lukeWidth, shredderLen, pressVelocity1, pressVelocity2;
    scanf("%d %d %d %d", &lukeWidth, &shredderLen, &pressVelocity1, &pressVelocity2);

    double timeLeft = 1.0 * (shredderLen - lukeWidth) / (pressVelocity1 + pressVelocity2);

    printf("%.20f", timeLeft);

    return 0;
}