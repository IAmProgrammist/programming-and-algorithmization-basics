#include "./../sharedfuncs/inc/consoleoutput.h"
#include "./../sharedfuncs/inc/6func.h"
#include <stdio.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // Используется для mock-тестирования
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    solveX2(a, b, c);

    return 0;
}