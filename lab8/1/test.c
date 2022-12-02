#include "./../sharedfuncs/inc/1func.h"
#include "./../sharedfuncs/inc/2func.h"

void test() {
    int a[5];
    inputArray(a + 2, 2);
    outputArray(a, 5);
}

int main() {
    test();

    return 0;
}