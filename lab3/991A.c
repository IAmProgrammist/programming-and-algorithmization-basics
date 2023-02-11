#include <stdio.h>

#define MIN_STUDENTS_DIDNT_PASS_EXAMS 1

int main() {
    int visitorsBugDonalds, visitorsBeaverKing, visitorsBothRestaurants, totalStudents;
    scanf("%d %d %d %d", &visitorsBugDonalds, &visitorsBeaverKing, &visitorsBothRestaurants, &totalStudents);

    int studentsDidntPassExams = totalStudents - visitorsBugDonalds - visitorsBeaverKing + visitorsBothRestaurants;

    if (studentsDidntPassExams < MIN_STUDENTS_DIDNT_PASS_EXAMS || visitorsBugDonalds < visitorsBothRestaurants ||
        visitorsBeaverKing < visitorsBothRestaurants)
        studentsDidntPassExams = -1;

    printf("%d", studentsDidntPassExams);

    return 0;
}