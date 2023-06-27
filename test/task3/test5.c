#include "task3.h"

int main() {
    Clock begin = {10, 00};
    Clock end = {12, 00};
    int restTime = 10;
    int travelTime = 15;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    ASSERT_INT(5, scheduleSize);
    ASSERT_TRUE(schedule[0].hours == 10 && schedule[0].minutes == 00);
    ASSERT_TRUE(schedule[1].hours == 10 && schedule[1].minutes == 25);
    ASSERT_TRUE(schedule[2].hours == 10 && schedule[2].minutes == 50);
    ASSERT_TRUE(schedule[3].hours == 11 && schedule[3].minutes == 15);
    ASSERT_TRUE(schedule[4].hours == 11 && schedule[4].minutes == 40);
}