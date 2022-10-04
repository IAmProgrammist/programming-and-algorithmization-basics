#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int firstRabbitPosition, secondRabbitPosition, firstRabbitVelocity, secondRabbitVelocity;
        scanf("%d %d %d %d", &firstRabbitPosition, &secondRabbitPosition,
              &firstRabbitVelocity, &secondRabbitVelocity);

        int distanceBetweenRabbits = secondRabbitPosition - firstRabbitPosition;
        int overallVelocity = firstRabbitVelocity + secondRabbitVelocity;

        int requiredTime;
        if (distanceBetweenRabbits % overallVelocity != 0)
            requiredTime = -1;
        else
            requiredTime = distanceBetweenRabbits / overallVelocity;

        printf("%d\n", requiredTime);
    }

    return 0;
}