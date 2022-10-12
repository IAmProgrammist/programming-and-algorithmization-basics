#include <stdio.h>

long long min(long long a, long long b) {
    return a < b ? a : b;
}

int main() {
    long long totalToys, gurgles;
    scanf("%lld %lld", &totalToys, &gurgles);

    long long middleUpperPrice = gurgles / 2 + 1;

    long long variationsToBuyToys;
    if (middleUpperPrice > totalToys)
        variationsToBuyToys = 0;
    else {
        long long biggestUpperPrice = min(totalToys, gurgles - 1);
        variationsToBuyToys = biggestUpperPrice - middleUpperPrice + 1;
    }

    printf("%lld", variationsToBuyToys);

    return 0;
}