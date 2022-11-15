#include "11func.h"

/**
 * <p>Заголовок: <code>bool isTrianglePossible(int a, int b, int c)</code>.</p>
 * <p>Назначение: по трём значениям <code>a</code>, <code>b</code>, <code>c</code> определяет, может ли существовать треугольник с такими сторонами
 * @param a длина первой стороны
 * @param b длина второй стороны
 * @param c длина третьей стороны
 */
bool isTrianglePossible(int a, int b, int c) {
    intSort3(&a, &b, &c);

    return c < a + b;
}