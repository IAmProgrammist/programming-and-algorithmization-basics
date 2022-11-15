#include <math.h>

#define EPS 0.0000001

int fcompare(double a, double b) {
    return fabs(a - b) < EPS;
}