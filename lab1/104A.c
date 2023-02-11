#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int requiredScore = n - 10;
    int suitableCards;

    if ((requiredScore >= 1 && requiredScore <= 9) || requiredScore == 11)
        suitableCards = 4;
    else if (requiredScore == 10)
        suitableCards = 15;
    else
        suitableCards = 0;

    printf("%d", suitableCards);

    return 0;
}