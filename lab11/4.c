#include "../libs/alg/alg.h"
#include <stdlib.h>

int main() {
    size_t arraySize;
    scanf("%zu", &arraySize);

    int *a = (int*) malloc(sizeof(int) * arraySize);

    inputArray(a, arraySize);

    int x;
    scanf("%d", &x);

    printf("%d", linearRecSearchInArray(a, arraySize, x));

    free(a);

    return 0;
}