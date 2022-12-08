#include "../../libs/alg/alg.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    size_t n;
    scanf("%zu", &n);

    int *array = (int *) malloc(n * sizeof(int));

    inputArray(array, n);

    if (!isSorted(array, n)) {
        double midGeometricNum = midGeometric(array, n);

        printf("%.6lf", midGeometricNum);
    } else
        printf("Последовательность упорядочена");

    free(array);

    return 0;
}