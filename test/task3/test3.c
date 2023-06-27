#include "task3.h"

int main() {
    Clock begin = {12, 00};
    Clock end = {12, 11};
    int restTime = 12;
    int travelTime = 12;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    ASSERT_INT(0, scheduleSize);
}