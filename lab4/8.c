#include <stdio.h>

#define CONVERT_CHAR_TO_DIGIT '0'
#define END_OF_LINE '\n'

int convertCharToDigit(int character) {
    return character - CONVERT_CHAR_TO_DIGIT;
}

int main() {
    int character = getchar();

    int maxCharacter = 1;

    while (character != END_OF_LINE) {
        maxCharacter = character > maxCharacter ? character : maxCharacter;

        character = getchar();
    }

    int maxDigit = convertCharToDigit(maxCharacter);

    printf("%d", maxDigit);

    return 0;
}