#include <stdio.h>

int main() {
    int eventAmount;
    scanf("%d", &eventAmount);

    int crimesUntreated = 0;
    int policeMembers = 0;

    for (int currentEvent = 0; currentEvent < eventAmount; currentEvent++) {
        int event;
        scanf("%d", &event);

        policeMembers += event;

        if (policeMembers < 0) {
            policeMembers = 0;
            crimesUntreated++;
        }
    }

    printf("%d", crimesUntreated);

    return 0;
}