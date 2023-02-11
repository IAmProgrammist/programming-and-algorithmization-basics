#include "../alg.h"

bool canFibbNumbersBeNeighbours_(int curA, int curB, int searchA, int searchB) {
    if (searchB > curB)
        return canFibbNumbersBeNeighbours_(curB, curA + curB, searchA, searchB);
    else
        return curA == searchA && curB == searchB;
}

bool canFibbNumbersBeNeighbours(int searchA, int searchB) {
    intSort2(&searchA, &searchB);

    return canFibbNumbersBeNeighbours_(1, 1, searchA, searchB);
}