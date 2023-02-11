#include "6func.h"

/**
 * <p>Заголовок: <code>void solveX2(double a, double b, double c)</code>.</p>
 * <p>Назначение: выводит корни уравнения вида <code>a</code>x ^ 2 + <code>b</code>x + <code>c</code> = 0.
 * @param a первый коэффициент квадратного уравнения
 * @param b второй коэффициент квадратного уравнения
 * @param c третий коэффициент квадратного уравнения
 */
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