#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_VECTORVOID_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_VECTORVOID_H

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define min(a, b) (a) < (b) ? (a) : (b)
#define max(a, b) (a) > (b) ? (a) : (b)

typedef struct VectorVoid {
    void *data;
    size_t size;
    size_t capacity;
    size_t baseTypeSize;
} VectorVoid;

VectorVoid createVectorV(size_t n, size_t baseTypeSize);

void reserveV(VectorVoid *v, size_t newCapacity);

void shrinkToFitV(VectorVoid *v);

void clearV(VectorVoid *v);

void deleteVectorV(VectorVoid *v);

bool isEmptyV(VectorVoid *v);

bool isFullV(VectorVoid *v);

void getVectorValueV(VectorVoid *v, size_t index, void *destination);

void setVectorValueV(VectorVoid *v, size_t index, void *source);

void popBackV(VectorVoid *v);

void pushBackV(VectorVoid *v, void *source);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_VECTORVOID_H