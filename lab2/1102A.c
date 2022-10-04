#include <stdio.h>

int main() {
    int lastElement;
    scanf("%d", &lastElement);

    int elementsSum = (1 + lastElement) * lastElement / 2;

    printf("%d", elementsSum % 2 != 0);

    return 0;
}