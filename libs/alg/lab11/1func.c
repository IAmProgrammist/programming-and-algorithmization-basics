#include "../alg.h"

int countDigits() {
    int currentChar = getchar();
    if(currentChar == '\n')
        return 0;
    else
        return isdigit(currentChar) + countDigits();
}