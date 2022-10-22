#include <stdio.h>
#include "consoleoutput.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int input;
    scanf("%d", &input);

    if(input == 0)
        printf("Последовательность пуста");
    else {
        int evenSum = (abs(input) % 2 == 0) * input;

        scanf("%d", &input);
        while (input != 0) {
            evenSum += (abs(input) % 2 == 0) * input;

            scanf("%d", &input);
        }

        printf("%d", evenSum);
    }
}
