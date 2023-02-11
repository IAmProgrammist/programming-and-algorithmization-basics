#include "../alg.h"

void printEverythingBesidesDigits() {
    int currentChar = getchar();
    if (currentChar == '\n')
        return;
    else {
        printEverythingBesidesDigits();

        if (!isdigit(currentChar))
            printf("%c", currentChar);
    }
}