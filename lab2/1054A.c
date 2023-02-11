#include <stdio.h>
#include <math.h>

int main() {
    int currentFloor, requiredFloor, liftFloor, stairsPassTime, liftPassTime, liftOpenCloseDoorTime;
    scanf("%d %d %d %d %d %d", &currentFloor, &requiredFloor, &liftFloor,
                                      &stairsPassTime, &liftPassTime, &liftOpenCloseDoorTime);

    int floorsToPass = abs(currentFloor - requiredFloor);
    int stairsTime = floorsToPass * stairsPassTime;
    int liftTime = (abs(currentFloor - liftFloor) + floorsToPass) * liftPassTime +
                   3 * liftOpenCloseDoorTime;

    if (stairsTime < liftTime)
        printf("NO");
    else
        printf("YES");

    return 0;
}