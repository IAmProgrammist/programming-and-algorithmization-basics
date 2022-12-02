#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_8_7FUNC_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_8_7FUNC_H

#include <stdbool.h>
#include <corecrt.h>

int findByPredicateFromEnd(const int *array, const int arraySize, bool (*predicate)(int));

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_8_7FUNC_H
