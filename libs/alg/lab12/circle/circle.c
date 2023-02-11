#include "circle.h"

void inputCircle(Circle *a) {
    inputPoint(&a->center);
    scanf("%lf", &a->r);
}

void inputCircles(Circle *a, size_t n) {
    for (size_t i = 0; i < n; i++) {
        inputCircle(a + i);
    }
}

void outputCircle(Circle a) {
    outputPoint(a.center);
    printf(" r = %.3lf", a.r);
}

void outputCircles(Circle *a, size_t n) {
    for (size_t i = 0; i < n; i++) {
        outputCircle(a[i]);
        printf("\n");
    }
}

bool hasOneOuterIntersection(Circle c1, Circle c2) {
    return fcompare(c1.r + c2.r, getDistance(c1.center, c2.center));
}