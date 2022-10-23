#include <stdio.h>
#include <math.h>

int main() {
    int input;
    scanf("%d", &input);

    int evenCount = 0;
    int oddCount = 0;
    if (input != 0) {
        evenCount = abs(input) % 2 == 0;
        int numbersTotal = 1;

        scanf("%d", &input);

        while (input != 0) {
            evenCount += abs(input) % 2 == 0;
            numbersTotal++;

            scanf("%d", &input);
        }

        oddCount = numbersTotal - evenCount;
    }

    printf("%d %d", evenCount, oddCount);

    return 0;
}
