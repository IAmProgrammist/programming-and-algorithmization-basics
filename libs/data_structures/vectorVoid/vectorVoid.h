#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_VECTORVOID_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_VECTORVOID_H

#include <stdint.h>
#include <stddef.h>

typedef struct VectorVoid {
    void *data;
    size_t size;
    size_t capacity;
    size_t baseTypeSize;
} VectorVoid;

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_VECTORVOID_H