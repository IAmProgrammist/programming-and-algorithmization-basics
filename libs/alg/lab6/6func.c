#include "../alg.h"

void solveX2(double a, double b, double c) {
    double D = b * b - 4 * a * c;

    if (fcompare(D, 0)) {
        double x = -b / (2 * a);

        printf("%.2lf\n", x);
    } else if (D > 0) {
        double sqrtD = sqrt(D);
        double x1 = (-b + sqrtD) / (2 * a);
        double x2 = (-b - sqrtD) / (2 * a);

        printf("%.2lf %.2lf\n", x1, x2);
    } else
        printf("Корней нет\n");
}