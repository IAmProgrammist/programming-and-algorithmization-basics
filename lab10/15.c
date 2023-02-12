#include <stdio.h>
#include <stdlib.h>

int numComparator(const void *a, const void *b) {
    if (*((long long *) a) > *((long long *) b)) return 1;
    if (*((long long *) a) < *((long long *) b)) return -1;
    return 0;
}

long long max(long long a, long long b) {
    return a > b ? a : b;
}

long long countRequiredSum(long long newNumber, long long const *const numberArray, int arraySize) {
    long long requiredSum = 0;
    for (int i = arraySize / 2; i < arraySize; i++)
        requiredSum += max(0, newNumber - numberArray[i]);

    return requiredSum;
}

int main() {
    int n;
    long long k;
    scanf("%d %lld", &n, &k);

    long long *array = (long long *) malloc(sizeof(long long) * n);
    for (int i = 0; i < n; i++)
        scanf("%lld", array + i);

    qsort(array, n, sizeof(array[0]), numComparator);

    long long left = -1;
    long long right = 2 * 1000000001;

    while (right - left > 1) {
        long long middleNum = left + (right - left) / 2;

        if (countRequiredSum(middleNum, array, n) <= k)
            left = middleNum;
        else
            right = middleNum;
    }

    free(array);

    printf("%lld", left);
}