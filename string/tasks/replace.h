#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_REPLACE_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_REPLACE_H

#include <stdint.h>

#include "revertEveryWord.h"

void replace(char *source, char *w1, char *w2);

int strcmpWords(WordDescriptor word, WordDescriptor word1);

void test_replace();

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_REPLACE_H