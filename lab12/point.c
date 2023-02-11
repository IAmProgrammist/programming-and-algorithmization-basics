#include "../libs/alg/lab12/point/point.h"

#define N 3

int main() {
    Point p1 = {};
    inputPoint(&p1);

    outputPoint(p1);
    printf("\n");

    Point p2 = p1;
    //Point p[N];
    Point *p = (Point*) malloc(sizeof(Point) * N);
    inputPoints(p, N);

    qsort(p, N, sizeof(p[0]), coordinatesComparator);

    outputPoints(p, N);

    qsort(p, N, sizeof(p[0]), distanceComparator);

    outputPoints(p, N);

    free(p);

    return 0;
}