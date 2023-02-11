#include <stdlib.h>

#include "../libs/alg/alg.h"

int main() {
    ssize_t arraySize;
    scanf("%zd", &arraySize);

    int *array = (int *) malloc(sizeof(int) * arraySize);
    inputArray(array, arraySize);

    selectionSort(array, arraySize);

    outputArray(array, arraySize);

    free(array);

    return 0;
}