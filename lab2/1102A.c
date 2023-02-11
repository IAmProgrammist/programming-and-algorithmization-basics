#include <stdio.h>

int main() {
    int lastElement;
    scanf("%d", &lastElement);

    int elementsSum = (1 + lastElement) * lastElement / 2;
    int minDifference = elementsSum % 2 != 0;

    printf("%d", minDifference);

    return 0;
}