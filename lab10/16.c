#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long long max(long long a, long long b) {
    return a > b ? a : b;
}

int main() {
    int n;
    long long k;
    scanf("%d %lld", &n, &k);

    long long left = -1;
    long long right = 0;

    long long *array = (long long *) malloc(sizeof(long long) * n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", array + i);
        right += array[i];
    }

    while (right - left > 1) {
        long long middleNum = left + (right - left) / 2;

        long long cuts = 0;
        long long tempSum = 0;

        for (int i = 0; i < n; i++) {
            if (tempSum + array[i] > middleNum) {
                cuts++;
                tempSum = 0;
            }

            if (array[i] > middleNum) {
                cuts = -1;
                break;
            }

            tempSum += array[i];
        }

        if (cuts < k && cuts != -1)
            right = middleNum;
        else
            left = middleNum;
    }

    printf("%lld", right);
}