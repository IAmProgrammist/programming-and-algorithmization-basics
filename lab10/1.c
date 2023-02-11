#include "stdio.h"
#include "stdlib.h"

int main() {
    int arraySize, requestAmount;
    scanf("%d %d", &arraySize, &requestAmount);

    int *array = (int *) malloc(sizeof(int) * arraySize);

    for (int i = 0; i < arraySize; i++)
        scanf("%d", array + i);

    for (int i = 0; i < requestAmount; i++) {
        int requestedNumber;
        scanf("%d", &requestedNumber);

        int left = -1;
        int right = arraySize;

        while (right - left > 1) {
            int middleIndex = left + (right - left) / 2;
            if (array[middleIndex] < requestedNumber)
                left = middleIndex;
            else
                right = middleIndex;
        }

        if (array[right] == requestedNumber)
            printf("YES\n");
        else
            printf("NO\n");
    }

    free(array);

    return 0;
}