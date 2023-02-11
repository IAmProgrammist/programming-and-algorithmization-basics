#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, m;
        scanf("%d %d", &n, &m);

        int lampCount = n * m / 2 + n * m % 2;

        printf("%d\n", lampCount);
    }

    return 0;
}