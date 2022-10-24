#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    int evenCount = 0;
    int oddCount = 0;

    while (input != 0) {
        if (input % 2 == 0)
            evenCount++;
        else
            oddCount++;

        scanf("%d", &input);
    }

    printf("%d %d", evenCount, oddCount);

    return 0;
}
