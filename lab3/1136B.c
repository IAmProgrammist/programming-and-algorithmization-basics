#include <stdio.h>

long long min(long long a, long long b) {
    return a < b ? a : b;
}

int main() {
    int hatchAmount, position;
    scanf("%d %d", &hatchAmount, &position);

    int stepsAmount = min(hatchAmount - position, position - 1) + 3 * hatchAmount;

    printf("%d", stepsAmount);

    return 0;
}