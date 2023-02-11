#include "../alg.h"

int getFirstElementOfArithmeticProgression(int element, int number, int delta) {
    if (number == 1)
        return element;
    else
        return getFirstElementOfArithmeticProgression(element - delta, number - 1, delta);
}