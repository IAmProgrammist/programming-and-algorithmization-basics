#include "vectorVoid.h"

VectorVoid createVectorV(size_t n, size_t baseTypeSize) {
    VectorVoid resultVector = {malloc(baseTypeSize * n), 0, n, baseTypeSize};
    if (resultVector.data == NULL) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }
    return resultVector;
}

void reserveV(VectorVoid *v, size_t newCapacity) {
    if (newCapacity == 0) {
        deleteVectorV(v);
        *v = (VectorVoid) {NULL, 0, 0, v->baseTypeSize};
    } else {
        *v = (VectorVoid) {realloc(v->data, newCapacity * v->baseTypeSize), min(newCapacity, v->size), newCapacity,
                           v->baseTypeSize};
        if (v->data == NULL) {
            fprintf(stderr, "bad alloc");
            exit(1);
        }
    }
}

void shrinkToFitV(VectorVoid *v) {
    reserveV(v, v->size);
}

void clearV(VectorVoid *v) {
    v->size = 0;
}

void deleteVectorV(VectorVoid *v) {
    free(v->data);
}