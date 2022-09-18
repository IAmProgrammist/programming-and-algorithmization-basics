#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maxSide, otherSide1, otherSide2;

    if(a > b && a > c) {
        maxSide = a;
        otherSide1 = b;
        otherSide2 = c;
    } else if (b > c) {
        otherSide1 = a;
        maxSide = b;
        otherSide2 = c;
    } else {
        otherSide1 = a;
        maxSide = c;
        otherSide2 = b;
    }

    int requiredTime = maxSide - (otherSide1 + otherSide2) + 1;

    if (requiredTime < 0)
        requiredTime = 0;

    printf("%d", requiredTime);

    return 0;
}