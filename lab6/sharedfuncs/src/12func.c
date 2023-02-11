#include "12func.h"

/**
 * <p>Заголовок: <code>bool isTrianglePossible(int a, int b, int c)</code>.</p>
 * <p>Назначение: Назначение: возвращает: <ul>
<li>-1, если треугольник со сторонами a, b, c не существует</li>
<li>0, если треугольник со сторонами a, b, c остроугольный</li>
<li>1, если треугольник со сторонами a, b, c прямоугольный</li>
<li>2, если треугольник со сторонами a, b, c тупоугольный</li>
 </ul></p>
 * @param a длина первой стороны
 * @param b длина второй стороны
 * @param c длина третьей стороны
 * @return -1 если треугольник не существует
 * @return 0 если треугольник остроугольный
 * @return 1 если треугольник прямоугольный
 * @return 2 если треугольник тупоугольный
 */
int getTriangleTypeLength(int a, int b, int c) {
    if (isTrianglePossible(a, b, c)) {
        intSort3(&a, &b, &c);

        int bigSideSquare = c * c;
        int sumOfSquaresOfSmallerSides = a * a + b * b;

        if(fcompare(bigSideSquare, sumOfSquaresOfSmallerSides))
            return 1;
        else if (bigSideSquare > sumOfSquaresOfSmallerSides)
            return 2;
        else
            return 0;
    } else return -1;
}