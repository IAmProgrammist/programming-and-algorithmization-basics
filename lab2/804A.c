#include <stdio.h>

int main() {
    int schoolsAmount;
    scanf("%d", &schoolsAmount);

    int ticketsTotalPrice = schoolsAmount / 2 + (schoolsAmount % 2) - 1;

    printf("%d", ticketsTotalPrice);

    return 0;
}