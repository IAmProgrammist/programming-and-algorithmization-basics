#include <stdio.h>

#define MAX_CANDIES_TO_GIVE_PER_DAY 8

long long min(long long a, long long b) {
    return a > b ? b : a;
}

int main() {
    int daysToGiveCandies, requiredCandiesToGive;
    scanf("%d %d", &daysToGiveCandies, &requiredCandiesToGive);

    int candiesStored = 0;

    int currentDay;
    for (currentDay = 0; currentDay < daysToGiveCandies && requiredCandiesToGive > 0; currentDay++) {
        int addedCandies;
        scanf("%d", &addedCandies);

        candiesStored += addedCandies;
        int givenCandies = min(candiesStored, MAX_CANDIES_TO_GIVE_PER_DAY);
        candiesStored -= givenCandies;
        requiredCandiesToGive -= givenCandies;
    }

    if (requiredCandiesToGive > 0)
        printf("-1");
    else
        printf("%d", currentDay);


    return 0;
}