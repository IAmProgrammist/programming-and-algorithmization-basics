#include "../../libs/alg/alg.h"

int main() {
    size_t n;
    scanf("%zu", &n);

    int *array = (int *) malloc(n * sizeof(int));

    inputArray(array, n);

    if (areElementsUnique(array, n))
        sortInsertion(array, n);

    outputArray(array, n);

    free(array);

    return 0;
}