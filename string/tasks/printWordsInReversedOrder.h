#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_PRINTWORDSINREVERSEDORDER_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_PRINTWORDSINREVERSEDORDER_H

#include <stdlib.h>

#include "isLexicographicalOrder.h"
#include "revertEveryWord.h"

typedef struct BagOfWords {
    WordDescriptor words[MAX_N_WORDS_IN_STRING];
    size_t size;
} BagOfWords;

void getBagOfWords(BagOfWords *bag, char *s);

void printWordsInReversedOrder(char *s);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_PRINTWORDSINREVERSEDORDER_H
