#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    int evenSum = 0;

    while (input != 0) {
        if (input % 2 == 0)
            evenSum += input;

        scanf("%d", &input);
    }

    printf("%d", evenSum);

    return 0;
}
