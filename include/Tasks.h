#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASKS_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASKS_H

#include <stdbool.h>


// Решает уравнение вида ax^2 + bx + c = 0, где D > 0. Результаты присваиваются переменным по указателям x1, x2
void solveSquareEquation(float a, float b, float c, float *x1, float *x2);

// Возвращает true если на участок застройки размером a x b можно разместить два дома размерами p x q и r x s
// параллельно сторонам участка. Иначе - false.
bool canPlaceTwoHousesInSquare(int a, int b, int p, int q, int r, int s);

// Содержит время - hours (часы) и minutes (минуты)
typedef struct Clock {
    int hours;
    int minutes;
} Clock;

// Сохраняет расписание автобуса в schedule и кол-во записей в расписании в scheduleSize, при условии что он начинает
// работу в start, заканчивает в end, проезжает маршрут за travelTime минут и отдыхает на конечных остановках restTime минут.
// В целях безопасности передаётся параметр maxScheduleSize - максимальное количество записей в расписании.
void getBusSchedule(Clock start, Clock end, int restTime, int travelTime, Clock *schedule, int *scheduleSize, int maxScheduleSize);

// По кругу располагаются n человек. Ведущий считает по кругу, начиная с первого, и выводит («казнит») m-го человека.
// Круг смыкается, счёт возобновляется со следующего после «казнённого»; так продолжается, пока «в живых» останется
// только один человек. Найти номер оставшегося «в живых» человека.
int josephProblemFindSurvivor(int n, int m);

// По кругу располагаются n человек. Ведущий считает по кругу, начиная с первого, и выводит («казнит») m-го человека.
// Круг смыкается, счёт возобновляется со следующего после «казнённого»; так продолжается, пока «в живых» останется
// только один человек. Найти такое m > 1, при котором «в живых» останется первый.
int josephProblemFindMForSurvivorOne(int n);

// Найти среднее арифметическое элементов каждой строки матрицы Q(l, m) и вычесть его из элементов этой строки.
void subtractMiddleOfLineFromEveryLine(double **matrix, int l, int m);

typedef struct MatrixIndex {
    int row;
    int column;
} MatrixIndex;

void findLongestZeroLineInMatrix(bool **matrix, int n, int k, MatrixIndex *longestZeroSubsequenceBegin,
                                 MatrixIndex *longestZeroSubsequenceEnd, int *maxSubsequenceSize);

void sum(unsigned int **numbers, int m, int n, int q, unsigned int *ans);

typedef struct Point {
    double x;
    double y;
} Point;

double getArea(Point *points, int pointsAmount);

void findX(double *matrixA, int n, double **matrixB, double **matrixX);

typedef struct ProperName {
    char *name;               // Ссылка на строку с именем собственным
} ProperName;

typedef struct FullName {
    ProperName name;          // Имя
    ProperName surname;       // Фамилия
    ProperName patronymic;    // Отчество
} FullName;

void validateProperName(ProperName name);

void validateFullName(FullName fullName);

void sortBySurname(FullName *namesList, int size);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASKS_H
