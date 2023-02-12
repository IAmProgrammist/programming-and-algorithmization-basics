#include <stdbool.h>
#include "stdio.h"

long long triangleNum(long long num) {
    return num * (num + 1) / 2;
}

int main() {
    long long num;
    scanf("%lld", &num);

    bool result = false;
    for (long long k = 1; (triangleNum(k) < num) && !result; k++) {
        long long secondTriangleNum = num - triangleNum(k);

        long long left = k - 1;
        long long right = num;

        while (right - left > 1) {
            long long middleNum = left + (right - left) / 2;

            if (triangleNum(middleNum) < secondTriangleNum)
                left = middleNum;
            else
                right = middleNum;
        }

        if (secondTriangleNum - triangleNum(right) == 0)
            result = true;
    }

    if (result)
        printf("YES");
    else
        printf("NO");

    return 0;
}