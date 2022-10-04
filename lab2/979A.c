#include <stdio.h>

#define BIRTHDAY_BOYS_AND_GIRLS 1

int main() {
    long long friendsAmount;
    scanf("%lld", &friendsAmount);

    long long totalPizzaConsumers = friendsAmount + BIRTHDAY_BOYS_AND_GIRLS;

    long long cuts;
    if (totalPizzaConsumers == 1)
        cuts = 0; // "Жалкое зрелище... Душераздирающее зрелище... Кошмар..."
    else if (totalPizzaConsumers % 2 == 0)
        cuts = totalPizzaConsumers / 2;
    else
        cuts = totalPizzaConsumers;

    printf("%lld", cuts);

    return 0;
}