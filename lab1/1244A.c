#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c, d, k;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &k);

        int requiredPens = a / c + (a % c != 0);
        int requiredPencils = b / d + (b % d != 0);

        if (requiredPencils + requiredPens <= k)
            printf("%d %d\n", requiredPens, requiredPencils);
        else
            printf("-1\n");
    }

    return 0;
}