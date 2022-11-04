#include <stdio.h>

#define NOT_INITED (-1)

int main() {
    int classAmount;
    scanf("%d", &classAmount);

    int classCounter = 0;
    int zerosCounter = 0;
    int totalVisitedClasses = 0;

    for (int currentClass = 0; currentClass < classAmount; currentClass++) {
        int isClassPresented;
        scanf("%d", &isClassPresented);

        if (isClassPresented) {
            classCounter += 1 + zerosCounter * (classCounter != 0);
            zerosCounter = 0;
        } else if (zerosCounter == 0) {
            zerosCounter++;
        } else if (zerosCounter == 1){
            totalVisitedClasses += classCounter;
            classCounter = 0;
            zerosCounter++;
        }
    }

    totalVisitedClasses += classCounter;

    printf("%d", totalVisitedClasses);

    return 0;
}