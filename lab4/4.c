#include <stdio.h>

int main() {
    int n, max;
    scanf("%d %d", &n, &max);

    int lastMaxIndex = 0;
    for (int i = 1; i < n; i++) {
        int input;
        scanf("%d", &input);

        if (input >= max) {
            max = input;
            lastMaxIndex = i;
        }
    }

    printf("%d", lastMaxIndex);

    return 0;
}
