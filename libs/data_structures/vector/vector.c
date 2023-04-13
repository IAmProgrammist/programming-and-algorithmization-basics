#include "vector.h"

Vector createVector(size_t n) {
    Vector resultVector = {malloc(sizeof(int) * n), 0, n};

    if (resultVector.data == NULL) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }
    return resultVector;
}

void reserve(Vector *v, size_t newCapacity) {
    if (newCapacity == 0) {
        deleteVector(v);
        *v = (Vector) {NULL, 0, 0};
    } else {
        *v = (Vector) {realloc(v->data, newCapacity * sizeof(int)), min(newCapacity, v->size), newCapacity};

        if (v->data == NULL) {
            fprintf(stderr, "bad alloc");
            exit(1);
        }
    }
}

void clear(Vector *v) {
    v->size = 0;
}

void shrinkToFit(Vector *v) {
    *v = (Vector) {realloc(v->data, (v->size) * sizeof(int)), v->size, v->size};
}

void deleteVector(Vector *v) {
    free(v->data);
}

bool isEmpty(Vector *v) {
    return v->size == 0;
}

bool isFull(Vector *v) {
    return v->size == v->capacity;
}

int getVectorValue(Vector *v, size_t i) {
    return v->data[i];
}

void pushBack(Vector *v, int x) {
    if (v->size + 1 > v->capacity)
        reserve(v, max(1, v->capacity * 2));

    v->data[v->size++] = x;
}

void popBack(Vector *v) {
    if (v->size == 0) {
        fprintf(stderr, "can't pop element from an empty array");
        exit(1);
    }

    v->size--;
}