#include <stddef.h>

#include "Tasks.h"

#define MINUTES_IN_HOURS 60

void getBusSchedule(Clock start, Clock end, int restTime, int travelTime, Clock *schedule, int *scheduleSize, int maxScheduleSize) {
    // Определяем время начала работы и её окончания
    int workTimeStart = start.hours * MINUTES_IN_HOURS + start.minutes;
    int workTimeTotal = end.hours * MINUTES_IN_HOURS + end.minutes - workTimeStart;

    for (*scheduleSize = 0; *scheduleSize < maxScheduleSize &&
    *scheduleSize * (restTime + travelTime) + travelTime <= workTimeTotal;
    (*scheduleSize)++) {
        // Определяем время отправки в минутах
        int dispatchTime = workTimeStart + (*scheduleSize) * (restTime + travelTime);
        // И сохраняем это время в расписание
        schedule[*scheduleSize] = (Clock) {dispatchTime / MINUTES_IN_HOURS,
                                           dispatchTime % MINUTES_IN_HOURS};
    }
}