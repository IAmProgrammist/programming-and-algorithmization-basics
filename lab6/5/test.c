#include <assert.h>
#include "./../sharedfuncs/inc/5func.h"
#include "utils.h"

void test() {
    assert(fcompare(getDistance(0, 0, 5, 0), 5.0));
    assert(fcompare(getDistance(0, 0, 3, 4), 5.0));
    assert(fcompare(getDistance(-11, 3, -1212, 90), 1204.1470009));
    assert(fcompare(getDistance(0, 0, 0, 0), 0));
    assert(fcompare(getDistance(6, 6, 6, 6), 0));
}

int main() {
    test();

    return 0;
}