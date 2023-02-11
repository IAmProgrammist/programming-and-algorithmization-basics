#include "../alg.h"

#define DIGIT_LOWER_BOUND '0'
#define DIGIT_UPPER_BOUND '9'

bool isDigit(char x) {
    return x >= DIGIT_LOWER_BOUND && x <= DIGIT_UPPER_BOUND;
}