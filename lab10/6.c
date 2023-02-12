#include "stdio.h"

int printedPages(int x, int y, int time) {
    return time / x + time / y;
}

int main() {
    int copiesAmount, xVelocity, yVelocity;
    scanf("%d %d %d", &copiesAmount, &xVelocity, &yVelocity);

    int left = -1;
    int right = xVelocity * copiesAmount;
    copiesAmount--;

    while (right - left > 1) {
        int middleTime = left + (right - left) / 2;
        if (printedPages(xVelocity, yVelocity, middleTime) < copiesAmount)
            left = middleTime;
        else
            right = middleTime;
    }

    right += xVelocity < yVelocity ? xVelocity : yVelocity;

    printf("%d", right);

    return 0;
}