#include <assert.h>

#include "libs/data_structures/vector/vector.h"

void test_pushBack_emptyVector() {
    Vector r = createVector(0);

    pushBack(&r, 42);
    assert(r.data[0] == 42 && r.size == 1 && r.capacity == 1);
}

void test_pushBack_fullVector() {
    Vector r = createVector(3);

    // Filling vector
    pushBack(&r, 421);
    pushBack(&r, 422);
    pushBack(&r, 423);

    pushBack(&r, 42);


    assert(r.data[3] == 42 && r.size == 4 && r.capacity == 6);

    deleteVector(&r);

    r = createVector(0);

    pushBack(&r, 1);
    assert(r.data[0] == 1 && r.size == 1 && r.capacity == 1);

    pushBack(&r, 6);
    assert(r.data[1] == 6 && r.size == 2 && r.capacity == 2);

    pushBack(&r, 5);
    assert(r.data[2] == 5 && r.size == 3 && r.capacity == 4);

    pushBack(&r, 7);
    assert(r.data[3] == 7 && r.size == 4 && r.capacity == 4);

    pushBack(&r, 42);
    assert(r.data[4] == 42 && r.size == 5 && r.capacity == 8);
}

void test_popBack_notEmptyVector() {
    Vector v = createVector(0);
    pushBack(&v, 10);
    assert(v.size == 1);
    popBack(&v);
    assert(v.size == 0);
    assert(v.capacity == 1);
}

void test() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
    test_popBack_notEmptyVector();
}

int main() {
    test();

    return 0;
}