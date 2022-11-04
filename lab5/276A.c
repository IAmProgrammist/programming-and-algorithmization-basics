#include <stdio.h>

long long max(long long a, long long b) {
    return a > b ? a : b;
}

int main() {
    int restaurantAmount, availableTime;
    scanf("%d %d", &restaurantAmount, &availableTime);

    int restaurantPleasure, lunchTime;
    scanf("%d %d", &restaurantPleasure, &lunchTime);

    int maxPleasure = restaurantPleasure - max(lunchTime - availableTime, 0);

    for (int currentRestaurant = 1; currentRestaurant < restaurantAmount; currentRestaurant++) {
        scanf("%d %d", &restaurantPleasure, &lunchTime);

        int currentPleasure = restaurantPleasure - max(lunchTime - availableTime, 0);
        maxPleasure = max(maxPleasure, currentPleasure);
    }

    printf("%d", maxPleasure);

    return 0;
}