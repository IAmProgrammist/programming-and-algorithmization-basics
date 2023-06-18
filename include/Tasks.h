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

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASKS_H
