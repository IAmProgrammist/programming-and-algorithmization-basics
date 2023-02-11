#include <stdio.h>

#define BIRTHDAY_PERSONS 1

int main() {
    long long friendsAmount;
    scanf("%lld", &friendsAmount);

    long long totalPizzaConsumers = friendsAmount + BIRTHDAY_PERSONS;

    long long cuts;
    if (totalPizzaConsumers % 2 == 0 || totalPizzaConsumers == 1)
        cuts = totalPizzaConsumers / 2;
    else
        cuts = totalPizzaConsumers;

    printf("%lld", cuts);

    return 0;
}