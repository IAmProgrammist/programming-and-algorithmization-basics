#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        long long n;
        int a, b;
        scanf("%lld %d %d", &n, &a, &b);

        long long sum;
        if (b >= a * 2)
            sum = n * a;
        else
            sum = (n / 2) * b + (n % 2) * a;

        printf("%lld\n", sum);
    }

    return 0;
}