#include "task3.h"

int main() {
    Clock begin = {10, 00};
    Clock end = {11, 00};
    int restTime = 0;
    int travelTime = 10;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    ASSERT_INT(6, scheduleSize);
    ASSERT_TRUE(schedule[0].hours == 10 && schedule[0].minutes == 00);
    ASSERT_TRUE(schedule[1].hours == 10 && schedule[1].minutes == 10);
    ASSERT_TRUE(schedule[2].hours == 10 && schedule[2].minutes == 20);
    ASSERT_TRUE(schedule[3].hours == 10 && schedule[3].minutes == 30);
    ASSERT_TRUE(schedule[4].hours == 10 && schedule[4].minutes == 40);
    ASSERT_TRUE(schedule[5].hours == 10 && schedule[5].minutes == 50);
}