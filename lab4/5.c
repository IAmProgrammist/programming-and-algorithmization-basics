#include <stdio.h>

int main() {
    int n, min;
    scanf("%d %d", &n, &min);

    int minCounter = 1;
    for (int i = 1; i < n; i++) {
        int input;
        scanf("%d", &input);

        if (input < min) {
            min = input;
            minCounter = 1;
        } else if (input == min)
            minCounter++;
    }

    printf("%d", minCounter);

    return 0;
}
