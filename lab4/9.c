#include <stdio.h>
#include "consoleoutput.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int input;
    scanf("%d", &input);

    if(input == 0)
        printf("Последовательность пуста");
    else {
        int evenCount = abs(input) % 2 == 0;
        int numbersTotal = 1;

        scanf("%d", &input);
        while (input != 0) {
            evenCount += abs(input) % 2 == 0;
            numbersTotal++;

            scanf("%d", &input);
        }

        int oddCount = numbersTotal - evenCount;

        printf("%d %d", evenCount, oddCount);
    }
}
