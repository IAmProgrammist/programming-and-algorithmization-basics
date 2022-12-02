#include "./../sharedfuncs/inc/10func.h"
#include "./../sharedfuncs/inc/2func.h"

bool isEven(int a) {
    return a % 2 == 0;
}

void test() {
    int a[5] = {1, 2, 3, 4, 5};
    reverseArray(a, 5);
    outputArray(a, 5);
}

int main() {
    test();

    return 0;
}