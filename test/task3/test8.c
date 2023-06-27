#include "task3.h"

int main() {
    Clock begin = {10, 00};
    Clock end = {11, 00};
    int restTime = 0;
    int travelTime = 0;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    ASSERT_INT(MAX_SCHEDULE_SIZE, scheduleSize);
}