#include "stdio.h"
#include "stdlib.h"

int basicNumComparator(const void *a, const void *b) {
    if (*((int *) a) > *((int *) b)) return 1;
    if (*((int *) a) < *((int *) b)) return -1;
    return 0;
}

int main() {
    int arraySize;
    scanf("%d", &arraySize);

    int *array = (int *) malloc(sizeof(int) * arraySize);
    for (int i = 0; i < arraySize; i++)
        scanf("%d", array + i);

    qsort(array, arraySize, sizeof(array[0]), basicNumComparator);

    int requestAmount;
    scanf("%d", &requestAmount);

    for (int i = 0; i < requestAmount; i++) {
        int requestedLeftBorder, requestedRightBorder;
        scanf("%d %d", &requestedLeftBorder, &requestedRightBorder);

        int left = -1;
        int right = arraySize;

        while (right - left > 1) {
            int middleIndex = left + (right - left) / 2;
            if (array[middleIndex] < requestedLeftBorder)
                left = middleIndex;
            else
                right = middleIndex;
        }

        int leftBorder = right;
        right = arraySize;

        while (right - left > 1) {
            int middleIndex = left + (right - left) / 2;
            if (array[middleIndex] <= requestedRightBorder)
                left = middleIndex;
            else
                right = middleIndex;
        }

        printf("%d\n", right - leftBorder);
    }

    free(array);

    return 0;
}