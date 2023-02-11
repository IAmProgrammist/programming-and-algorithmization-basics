#include "../alg.h"

double getD(int x1, int y1, int x2, int y2) {
    double deltaX = x1 - x2;
    double deltaY = y1 - y2;

    return sqrt(deltaX * deltaX + deltaY * deltaY);
}