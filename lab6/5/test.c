#include <assert.h>
#include "../../libs/alg/alg.h"

void test() {
    assert(fcompare(getD(0, 0, 5, 0), 5.0));
    assert(fcompare(getD(0, 0, 3, 4), 5.0));
    assert(fcompare(getD(-11, 3, -1212, 90), 1204.1470009));
    assert(fcompare(getD(0, 0, 0, 0), 0));
    assert(fcompare(getD(6, 6, 6, 6), 0));
}

int main() {
    test();

    return 0;
}