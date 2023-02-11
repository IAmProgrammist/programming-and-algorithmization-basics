#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_POINT_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_POINT_H

#include <stdio.h>
#include "../../alg.h"

#define EPS 0.0000001
#define COORDINATES_START (Point) {0, 0}

typedef struct Point {
    double x;
    double y;
} Point;

// вводит x и y в точку по адресу p
void inputPoint(Point *p);

// выводит x и y структуры p
void outputPoint(Point p);

// вводит x и y в массив структур p размером arraySize
void inputPoints(Point *p, size_t arraySize);

// выводит x и y структур в массиве p размером arraySize
void outputPoints(Point *p, size_t arraySize);

// возвращает точку находящуюся посередине точек p1 и p2
Point getMiddlePoint(Point p1, Point p2);

// возвращает "истина", если точки p1 и p2 равны, иначе - "ложь"
int arePointsEqual(Point p1, Point p2);

// возвращает "истина", если точка p3 находится посередине между точками p1 и p2, иначе - "ложь"
int isPointBetween(Point p1, Point p2, Point p3);

// меняет местами координаты x и y точки по адресу p
void swapCoordinates(Point *p);

// меняет точки по адресам p1 и p2
void swapPoints(Point *p1, Point *p2);

// возвращает расстояние между точкой p1 и p2
double getDistance(Point p1, Point p2);

// возвращает
// 0,  если точки p1 и p2 равны, иначе
// 1,  если координаты x точки p1 больше координаты x точки p2
//     или координаты х точек p1 и p2 равны, а координата y точки p1
//     больше чем y точки p2,
// -1  во всех остальных случаях
int coordinatesComparator(const void *p1, const void *p2);

// возвращает
// 0,  если расстояние точек p1 и p2 до начала координат равно, иначе
// 1,  если расстояние точки p1 до центра координат больше расстояния
//     точки p2 до центра координат
// -1  во всех остальных случаях
int distanceComparator(const void *p1, const void *p2);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_POINT_H
