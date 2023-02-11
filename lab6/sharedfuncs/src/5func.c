#include "5func.h"

/**
 * <p>Заголовок: <code>double getDistance(int x1, int y1, int x2, int y2)</code>.</p>
 * <p>Назначение: возвращает расстояние между двумя точками A(<code>x1</code>; <code>y1</code>) и B(<code>x2</code>; <code>y2</code>)
 * @param x1 координата x точки A
 * @param y1 координата y точки A
 * @param x2 координата x точки B
 * @param y2 координата y точки B
 */
double getDistance(int x1, int y1, int x2, int y2) {
    double deltaX = x1 - x2;
    double deltaY = y1 - y2;

    return sqrt(deltaX * deltaX + deltaY * deltaY);
}