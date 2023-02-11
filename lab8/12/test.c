#include "./../sharedfuncs/inc/12func.h"
#include "./../sharedfuncs/inc/2func.h"

bool isEven(int a) {
    return a % 2 == 0;
}

void test() {
    int a[10] = {8, 5, 2, 6, 9, 3, 1, 4, 0, 7};
    selectionSort(a, 10);
    outputArray(a, 10);
}

int main() {
    test();

    return 0;
}