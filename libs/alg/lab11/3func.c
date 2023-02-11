#include "../alg.h"

int getGeometricalProgressionElement(int firstElement, int multiplier, unsigned elementNum) {
    if (elementNum == 1)
        return firstElement;
    else
        return getGeometricalProgressionElement(firstElement, multiplier, elementNum - 1) * multiplier;
}