#include <stdio.h>

int main() {
    int n, min;
    scanf("%d %d", &n, &min);

    int firstMinIndex = 0;
    for (int i = 1; i < n; i++) {
        int input;
        scanf("%d", &input);

        if (input < min) {
            min = input;
            firstMinIndex = i;
        }
    }

    printf("%d", firstMinIndex);

    return 0;
}
