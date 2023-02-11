#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_CIRCLE_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_CIRCLE_H

#include "../point/point.h"

typedef struct Circle {
    Point center;
    double r;
} Circle;

// вводит центр и радиус окружности по адресу a
void inputCircle(Circle *a);

// вводит центр и радиус в массив окружностей a размером n
void inputCircles(Circle *a, size_t n);

// выводит центр и радиус окружности a
void outputCircle(Circle a);

// вводит центры и радиусы массива окружностей a размером n
void outputCircles(Circle *a, size_t n);

// возвращает "истина", если c1 и c2 касаются внешним образом,
// иначе - "ложь"
bool hasOneOuterIntersection(Circle c1, Circle c2);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_CIRCLE_H
