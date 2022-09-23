#include <stdio.h>

int main() {
    int w, k, n;
    scanf("%d %d %d", &k, &n, &w);

    int S = ((k + w * k) * w) / 2;

    int totalPayment = S - n;
    if (totalPayment < 0)
        totalPayment = 0;

    printf("%d", totalPayment);

    return 0;
}