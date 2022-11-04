#include <stdio.h>

int main() {
    int cubesTotal;
    scanf("%d", &cubesTotal);

    int maxHeight = 0;
    int cubesCurrentTotal = 0;

    while (cubesCurrentTotal <= cubesTotal) {
        maxHeight++;
        cubesCurrentTotal += (maxHeight * (maxHeight + 1)) / 2;
    }

    maxHeight--;

    printf("%d", maxHeight);

    return 0;
}