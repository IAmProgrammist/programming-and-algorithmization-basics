#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int apartmentNumber, apartmentsOnFloor;
        scanf("%d %d", &apartmentNumber, &apartmentsOnFloor);

        int floor;
        if (apartmentNumber == 1 || apartmentNumber == 2)
            floor = 1;
        else {
            floor = (apartmentNumber - 3) / apartmentsOnFloor + 2;
        }

        printf("%d\n", floor);
    }

    return 0;
}