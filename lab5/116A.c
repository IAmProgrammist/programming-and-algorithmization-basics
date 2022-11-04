#include <stdio.h>

int main() {
    int busStops;
    scanf("%d", &busStops);

    int busCapacity = 0;
    int currentPassengersAmount = 0;

    for (int currentBusStop = 0; currentBusStop < busStops; currentBusStop++) {
        int passengersLeft, passengersEntered;
        scanf("%d %d", &passengersLeft, &passengersEntered);

        currentPassengersAmount += passengersEntered - passengersLeft;

        if (currentPassengersAmount > busCapacity)
            busCapacity = currentPassengersAmount;
    }

    printf("%d", busCapacity);

    return 0;
}