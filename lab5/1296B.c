#include <stdio.h>

#define CASHBACK_TOTAL_PARTS 10
#define CASHBACK_PART 1

int main() {
    int purchaseAmount;
    scanf("%d", &purchaseAmount);

    for (int currentPurchase = 0; currentPurchase < purchaseAmount; currentPurchase++) {
        long long moneyTotal;
        scanf("%lld", &moneyTotal);

        long long moneySpentTotal = 0;

        while (moneyTotal > CASHBACK_TOTAL_PARTS - CASHBACK_PART) {
            long long moneyCashback = moneyTotal / CASHBACK_TOTAL_PARTS;
            moneyTotal = (moneyTotal % CASHBACK_TOTAL_PARTS) + moneyCashback;
            moneySpentTotal += moneyCashback * CASHBACK_TOTAL_PARTS;
        }

        moneySpentTotal += moneyTotal;

        printf("%lld\n", moneySpentTotal);
    }

    return 0;
}