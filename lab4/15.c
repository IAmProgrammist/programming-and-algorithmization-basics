#include <stdio.h>
#include <stdbool.h>

#define END_OF_LINE '\n'

bool isLetter(int character) {
    return character >= 'a' && character <= 'z';
}

bool isVowel(int character) {
    return character == 'a' ||
           character == 'e' ||
           character == 'i' ||
           character == 'o' ||
           character == 'u' ||
           character == 'y';
}

bool isConsonant(int character) {
    return !isVowel(character) && isLetter(character);
}

int main() {
    int count = 0;

    int input;
    while ((input = getchar()) != END_OF_LINE) {
        if (isConsonant(input))
            count++;
    }

    printf("%d", count);
}