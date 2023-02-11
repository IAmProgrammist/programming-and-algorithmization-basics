#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max;
    scanf("%d", &max);

    for (int i = 2; i <= n; i++) {
        int input;
        scanf("%d", &input);

        max = input > max ? input : max;
    }

    printf("%d", max);

    return 0;
}

