#include "task3.h"

int main() {
    Clock begin = {12, 00};
    Clock end = {12, 12};
    int restTime = 12;
    int travelTime = 12;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    ASSERT_INT(1, scheduleSize);
    ASSERT_TRUE(schedule[0].hours == 12 && schedule[0].minutes == 00);
}