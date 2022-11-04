#include <stdio.h>

#define CASHBACK_SIZE 10

int main() {
    int purchaseAmount;
    scanf("%d", &purchaseAmount);

    for (int currentPurchase = 0; currentPurchase < purchaseAmount; currentPurchase++) {
        long long moneyTotal;
        scanf("%lld", &moneyTotal);

        long long moneySpentTotal = 0;

        while (moneyTotal > CASHBACK_SIZE - 1) {
            long long moneyCashback = moneyTotal / CASHBACK_SIZE;
            moneyTotal = (moneyTotal % CASHBACK_SIZE) + moneyCashback;
            moneySpentTotal += moneyCashback * CASHBACK_SIZE;
        }

        moneySpentTotal += moneyTotal;

        printf("%lld\n", moneySpentTotal);
    }

    return 0;
}