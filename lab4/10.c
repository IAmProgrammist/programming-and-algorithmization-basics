#include <stdio.h>

#define END_OF_LINE '\n'

int convertCharToDigit(int character) {
    return character - '0';
}

int main() {
    int input = getchar();

    int digitsProduct = 1;

    while (input != END_OF_LINE) {
        int digit = convertCharToDigit(input);

        if (digit != 0)
            digitsProduct *= digit;

        input = getchar();
    }

    printf("%d", digitsProduct);

    return 0;
}