#include <stdio.h>
#include <math.h>

int main() {
    int input;
    scanf("%d", &input);

    int evenSum = 0;
    if(input != 0) {
        evenSum = (abs(input) % 2 == 0) * input;

        scanf("%d", &input);

        while (input != 0) {
            evenSum += (abs(input) % 2 == 0) * input;

            scanf("%d", &input);
        }

    }

    printf("%d", evenSum);

    return 0;
}
