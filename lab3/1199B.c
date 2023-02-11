#include <stdio.h>

int main() {
    long long heightAboveWaterLevel, flowerSailDistance;
    scanf("%lld %lld", &heightAboveWaterLevel, &flowerSailDistance);

    double lakeDepth = (flowerSailDistance * flowerSailDistance - heightAboveWaterLevel * heightAboveWaterLevel) /
                       (2.0 * heightAboveWaterLevel);

    printf("%.13f", lakeDepth);

    return 0;
}