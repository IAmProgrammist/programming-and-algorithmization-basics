#include "../libs/alg/alg.h"

int main() {
    int n;
    scanf("%d", &n);

    int* ar = malloc(n * sizeof(int));

    inputArray(ar, n);

    int x;
    scanf("%d", &x);

    printf("%d", gorner(ar, n, x));
}