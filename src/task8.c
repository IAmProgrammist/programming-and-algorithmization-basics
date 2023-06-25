#include <math.h>

#include "Tasks.h"

double getArea(Point *points, int pointsAmount) {
    double areaTotal = 0;

    for (int i = 0; i < pointsAmount; i++)
        areaTotal += (points[i].x - points[(i + 1) % pointsAmount].x) *
                (points[i].y + points[(i + 1) % pointsAmount].y) / 2;

    areaTotal = fabs(areaTotal);

    return areaTotal;
}