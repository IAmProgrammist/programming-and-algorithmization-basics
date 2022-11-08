#include <stdio.h>

#define NOT_INITED (-1)
#define BREAKS_ENOUGH_TO_LEAVE 1
#define TOO_MANY_BREAKS 2

int main() {
    int classAmount;
    scanf("%d", &classAmount);

    int breakCounter = TOO_MANY_BREAKS;
    int totalVisitedClasses = 0;

    for (int currentClass = 0; currentClass < classAmount; currentClass++) {
        int isClassPresented;
        scanf("%d", &isClassPresented);

        if (isClassPresented) {
            totalVisitedClasses++;
            breakCounter = 0;
        } else if (breakCounter < BREAKS_ENOUGH_TO_LEAVE) {
            totalVisitedClasses++;
            breakCounter++;
        } else if (breakCounter == BREAKS_ENOUGH_TO_LEAVE) {
            totalVisitedClasses--;
            breakCounter = TOO_MANY_BREAKS;
        }
    }

    totalVisitedClasses -= (breakCounter != TOO_MANY_BREAKS) * breakCounter;

    printf("%d", totalVisitedClasses);

    return 0;
}