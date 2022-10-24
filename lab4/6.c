#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int input;
    scanf("%d", &input);

    int max = input;
    int min = input;

    for (int i = 1; i < n; i++) {
        scanf("%d", &input);

        if (input > max)
            max = input;
        else if (input < min)
            min = input;
    }

    int differenceBetweenMaxAndMin = max - min;

    printf("%d", differenceBetweenMaxAndMin);

    return 0;
}
