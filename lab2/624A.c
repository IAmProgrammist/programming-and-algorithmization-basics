#include <stdio.h>

int main() {
    int lukeWidth, shredderLen, pressVelocity1, pressVelocity2;
    scanf("%d %d %d %d", &lukeWidth, &shredderLen, &pressVelocity1, &pressVelocity2);

    int spaceInShredderLeft = shredderLen - lukeWidth;
    int overallPressVelocity = pressVelocity1 + pressVelocity2;
    double timeLeft = 1.0 * (spaceInShredderLeft) / (overallPressVelocity);

    printf("%.8f", timeLeft);

    return 0;
}