#include <stdio.h>

#define CONVERT_CHAR_TO_DIGIT '0'
#define END_OF_LINE '\n'

int convertCharToDigit(int character) {
    return character - CONVERT_CHAR_TO_DIGIT;
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