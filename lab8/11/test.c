#include "./../sharedfuncs/inc/11func.h"
#include "./../sharedfuncs/inc/2func.h"

bool isEven(int a) {
    return a % 2 == 0;
}

void test() {
    int a[5] = {4, 4, 3, 1};
    printf("%d", isPalindrome(a, 2));
}

int main() {
    test();

    return 0;
}