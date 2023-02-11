#include "../../libs/alg/alg.h"

int main() {
    size_t n;
    scanf("%zu", &n);

    int *array = (int *) malloc(n * sizeof(int));

    inputArray(array, n);

    if(isGeometricProgression(array, n))
        printf("YES");
    else
        printf("NO");

    free(array);

    return 0;
}