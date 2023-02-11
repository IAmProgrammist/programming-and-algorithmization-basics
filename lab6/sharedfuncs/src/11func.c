#include "11func.h"

/**
 * <p>Заголовок: <code>bool isTrianglePossible(int a, int b, int c)</code>.</p>
 * <p>Назначение: возвращает “истина”, если треугольник <code>a</code>, <code>b</code>, <code>c</code> существует, иначе – “ложь”
 * @param a длина первой стороны
 * @param b длина второй стороны
 * @param c длина третьей стороны
 */
bool isTrianglePossible(int a, int b, int c) {
    intSort3(&a, &b, &c);

    return c < a + b;
}