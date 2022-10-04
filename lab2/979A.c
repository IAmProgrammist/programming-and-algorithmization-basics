#include <stdio.h>

int main() {
    long long friendsAmount;
    scanf("%lld", &friendsAmount);

    long long totalPizzaConsumers = friendsAmount + 1;

    long long cuts;
    if (totalPizzaConsumers == 1)
        cuts = 0; // "Жалкое зрелище... Душераздирающее зрелище... Кошмар..." - Ослик Иа
    else if (totalPizzaConsumers % 2 == 0)
        cuts = totalPizzaConsumers / 2;
    else
        cuts = totalPizzaConsumers;

    printf("%lld", cuts);

    return 0;
}