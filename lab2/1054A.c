#include <stdio.h>

int abs(int value) {
    return value < 0 ? -value : value;
}

int main() {
    int currentFloor, requiredFloor, liftFloor, stairsPassTime, liftPassTime, liftOpenCloseDoorTime;
    scanf("%d %d %d %d %d %d", &currentFloor, &requiredFloor, &liftFloor,
          &stairsPassTime, &liftPassTime, &liftOpenCloseDoorTime);

    int stairsTime = abs(currentFloor - requiredFloor) * stairsPassTime;
    int liftTime = (abs(currentFloor - liftFloor) + abs(currentFloor - requiredFloor)) * liftPassTime +
                   3 * liftOpenCloseDoorTime;

    if (stairsTime < liftTime)
        printf("NO");
    else
        printf("YES");

    return 0;
}