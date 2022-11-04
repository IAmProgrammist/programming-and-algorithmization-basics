#include <stdio.h>

int main() {
    int roomsAmount;
    scanf("%d", &roomsAmount);

    int roomsAvailableForMovingIn = 0;

    for (int currentRoom = 0; currentRoom < roomsAmount; currentRoom++) {
        int roomLivingPeople, roomAccommodatePeople;
        scanf("%d %d", &roomLivingPeople, &roomAccommodatePeople);

        roomsAvailableForMovingIn += (roomAccommodatePeople - roomLivingPeople) >= 2;
    }

    printf("%d", roomsAvailableForMovingIn);

    return 0;
}