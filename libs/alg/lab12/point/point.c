#include "point.h"

void inputPoint(Point *p) {
    scanf("%lf %lf", &p->x, &p->y);
}

void outputPoint(Point p) {
    printf("(%.3lf %.3lf)", p.x, p.y);
}

void inputPoints(Point *p, size_t arraySize) {
    for (size_t i = 0; i < arraySize; i++)
        inputPoint(p + i);
}

void outputPoints(Point *p, size_t arraySize) {
    for (size_t i = 0; i < arraySize; i++) {
        outputPoint(p[i]);
        printf("\n");
    }
}

Point getMiddlePoint(Point p1, Point p2) {
    return (Point) {(p1.x + p2.x) / 2, (p1.y + p2.y) / 2};
}

int arePointsEqual(Point p1, Point p2) {
    return fcompare(p1.x, p2.x) && fcompare(p1.y, p2.y);
}

int isPointBetween(Point p1, Point p2, Point p3) {
    return arePointsEqual(getMiddlePoint(p1, p2), p3);
}

void swapCoordinates(Point *p) {
    swap(&p->x, &p->y, sizeof(p->x));
}

void swapPoints(Point *p1, Point *p2) {
    swap(p1, p2, sizeof(*p1));
}

double getDistance(Point p1, Point p2) {
    double distX = p1.x - p2.x;
    double distY = p1.y - p2.y;

    return sqrt(distX * distX + distY * distY);
}

int coordinatesComparator(const void *p1, const void *p2) {
    Point *a = (Point *) p1;
    Point *b = (Point *) p2;

    if (a->x != b->x)
        return (a->x - b->x) > 0 ? 1 : -1;

    if (a->y != b->y)
        return (a->y - b->y) > 0 ? 1 : -1;

    return 0;
}

int distanceComparator(const void *p1, const void *p2) {
    Point *a = (Point *) p1;
    Point *b = (Point *) p2;

    double distA = getDistance(*a, COORDINATES_START);
    double distB = getDistance(*b, COORDINATES_START);

    if (distA == distB)
        return 0;

    return (distA - distB) > 0 ? 1 : -1;
}

