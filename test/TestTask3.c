#include <stddef.h>
#include "CuTest.h"
#include "Tasks.h"

#define MAX_SCHEDULE_SIZE 1000

void testTask3NoWorkingTime(CuTest *tc) {
    Clock begin = {12, 00};
    Clock end = {12, 00};
    int restTime = 12;
    int travelTime = 12;
    Clock *schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    CuAssertIntEquals(tc, 0, scheduleSize);
}

void testTask3NegativeWorkingTime(CuTest *tc) {
    Clock begin = {12, 00};
    Clock end = {10, 00};
    int restTime = 12;
    int travelTime = 12;
    Clock *schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    CuAssertIntEquals(tc, 0, scheduleSize);
}

void testTask3NotEnoughWorkingTime(CuTest *tc) {
    Clock begin = {12, 00};
    Clock end = {12, 11};
    int restTime = 12;
    int travelTime = 12;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    CuAssertIntEquals(tc, 0, scheduleSize);
}

void testTask3TimeEnoughJustForOneTravel(CuTest *tc) {
    Clock begin = {12, 00};
    Clock end = {12, 12};
    int restTime = 12;
    int travelTime = 12;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    CuAssertIntEquals(tc, 1, scheduleSize);
    CuAssert(tc, NULL, schedule[0].hours == 12 && schedule[0].minutes == 00);
}

void testTask3RegularScenario(CuTest *tc) {
    Clock begin = {10, 00};
    Clock end = {12, 00};
    int restTime = 10;
    int travelTime = 15;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    CuAssertIntEquals(tc, 5, scheduleSize);
    CuAssert(tc, NULL, schedule[0].hours == 10 && schedule[0].minutes == 00);
    CuAssert(tc, NULL, schedule[1].hours == 10 && schedule[1].minutes == 25);
    CuAssert(tc, NULL, schedule[2].hours == 10 && schedule[2].minutes == 50);
    CuAssert(tc, NULL, schedule[3].hours == 11 && schedule[3].minutes == 15);
    CuAssert(tc, NULL, schedule[4].hours == 11 && schedule[4].minutes == 40);
}

void testTask3Teleportation(CuTest *tc) {
    Clock begin = {10, 00};
    Clock end = {11, 00};
    int restTime = 10;
    int travelTime = 0;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    CuAssertIntEquals(tc, 7, scheduleSize);
    CuAssert(tc, NULL, schedule[0].hours == 10 && schedule[0].minutes == 00);
    CuAssert(tc, NULL, schedule[1].hours == 10 && schedule[1].minutes == 10);
    CuAssert(tc, NULL, schedule[2].hours == 10 && schedule[2].minutes == 20);
    CuAssert(tc, NULL, schedule[3].hours == 10 && schedule[3].minutes == 30);
    CuAssert(tc, NULL, schedule[4].hours == 10 && schedule[4].minutes == 40);
    CuAssert(tc, NULL, schedule[5].hours == 10 && schedule[5].minutes == 50);
    CuAssert(tc, NULL, schedule[6].hours == 11 && schedule[6].minutes == 00);
}

void testTask3NoRest(CuTest *tc) {
    Clock begin = {10, 00};
    Clock end = {11, 00};
    int restTime = 0;
    int travelTime = 10;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    CuAssertIntEquals(tc, 6, scheduleSize);
    CuAssert(tc, NULL, schedule[0].hours == 10 && schedule[0].minutes == 00);
    CuAssert(tc, NULL, schedule[1].hours == 10 && schedule[1].minutes == 10);
    CuAssert(tc, NULL, schedule[2].hours == 10 && schedule[2].minutes == 20);
    CuAssert(tc, NULL, schedule[3].hours == 10 && schedule[3].minutes == 30);
    CuAssert(tc, NULL, schedule[4].hours == 10 && schedule[4].minutes == 40);
    CuAssert(tc, NULL, schedule[5].hours == 10 && schedule[5].minutes == 50);
}

void testTask3ShouldNotOverfill(CuTest *tc) {
    Clock begin = {10, 00};
    Clock end = {11, 00};
    int restTime = 0;
    int travelTime = 0;
    Clock schedule[MAX_SCHEDULE_SIZE];
    int scheduleSize;

    getBusSchedule(begin, end, restTime, travelTime, schedule, &scheduleSize, MAX_SCHEDULE_SIZE);

    CuAssertIntEquals(tc, MAX_SCHEDULE_SIZE, scheduleSize);
}

CuSuite *Task3GetSuite() {
    CuSuite *suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, testTask3NoWorkingTime);
    SUITE_ADD_TEST(suite, testTask3NegativeWorkingTime);
    SUITE_ADD_TEST(suite, testTask3NotEnoughWorkingTime);
    SUITE_ADD_TEST(suite, testTask3TimeEnoughJustForOneTravel);
    SUITE_ADD_TEST(suite, testTask3RegularScenario);
    SUITE_ADD_TEST(suite, testTask3Teleportation);
    SUITE_ADD_TEST(suite, testTask3NoRest);
    SUITE_ADD_TEST(suite, testTask3ShouldNotOverfill);

    return suite;
}