#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int max;
    scanf("%d", &max);
    for (int i = 2; i <= n; i++) {
        int input;
        scanf("%d", &input);

        if (input > max)
            max = input;
    }

    printf("%d", max);

    return 0;
}

