#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_8_5FUNC_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_8_5FUNC_H

#include <stdbool.h>
#include <corecrt.h>
#include <stdio.h>

size_t findByPredicateFromBegin(const int *array, const size_t arraySize, bool (*predicate)(int));

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_8_5FUNC_H
