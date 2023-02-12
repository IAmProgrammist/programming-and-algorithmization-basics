#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int numComparator(const void *a, const void *b) {
    if (*((long long *) a) > *((long long *) b)) return 1;
    if (*((long long *) a) < *((long long *) b)) return -1;
    return 0;
}

int main() {
    int datasetAmount;
    scanf("%d", &datasetAmount);

    for (int i = 0; i < datasetAmount; i++) {
        long long datasetElementsAmount;
        scanf("%lld", &datasetElementsAmount);

        long long sum = 0;
        long long *array = (long long *) malloc(sizeof(long long) * datasetElementsAmount);
        for (int j = 0; j < datasetElementsAmount; j++) {
            scanf("%lld", array + j);
            sum += array[j];
        }

        if (2 * sum % datasetElementsAmount != 0) {
            printf("0\n");
            continue;
        }

        long long sumOfTwoNums = 2 * sum / datasetElementsAmount;

        qsort(array, datasetElementsAmount, sizeof(array[0]), numComparator);

        long long answerCount = 0;
        for (long long leftIndex = 0, rightIndex = datasetElementsAmount - 1; leftIndex != rightIndex; leftIndex++) {
            long long left = leftIndex;
            long long right = rightIndex + 1;
            while (right - left > 1) {
                long long middle = left + (right - left) / 2;
                if (array[leftIndex] + array[middle] <
                    sumOfTwoNums)
                    left = middle;
                else
                    right = middle;
            }

            rightIndex = right;

            if ((array[leftIndex] + array[right]) ==
                sumOfTwoNums) {
                long long k = right;
                while (k < datasetElementsAmount && array[k] == array[right])
                    k++;

                answerCount += k - right;
                rightIndex = k - 1;
            }
        }

        printf("%lld\n", answerCount);

        free(array);
    }

    return 0;
}


