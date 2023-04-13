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