#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int numComparator(const void *a, const void *b) {
    if (*((long long *) a) > *((long long *) b)) return 1;
    if (*((long long *) a) < *((long long *) b)) return -1;
    return 0;
}

long long max(long long a, long long b) {
    return a > b ? a : b;
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

        long long requiredSum = 0;

        for (int i = n / 2; i < n; i++)
            requiredSum += max(0, middleNum - array[i]);

        if (requiredSum <= k)
            left = middleNum;
        else
            right = middleNum;
    }

    printf("%lld", left);
}