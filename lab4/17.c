#include <stdio.h>
#include <stdbool.h>

#define CONVERT_CHAR_TO_DIGIT '0'
#define END_OF_LINE '\n'

bool isDigit(int character) {
    return character > '0' && character <= '9';
}

int charToInt(int character) {
    return character - CONVERT_CHAR_TO_DIGIT;
}

int main() {
    int digitsSum = 0;

    int input;
    while ((input = getchar()) != '.') {
        if (isDigit(input))
            digitsSum += charToInt(input);
    }

    printf("%d", digitsSum);
}