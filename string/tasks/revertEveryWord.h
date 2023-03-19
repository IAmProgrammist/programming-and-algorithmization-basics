#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_REVERTEVERYWORD_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_REVERTEVERYWORD_H

#include "../string_.h"

typedef struct WordDescriptor {
    char *begin;
    char *end;
} WordDescriptor;

void test_revertEveryWord();

int getWord(char *beginSearch, WordDescriptor *word);

void swap(void *a, void *b, int size);

void revert(WordDescriptor word);

void revertEveryWord(char *s);

int getWordReverse(char *rbegin, char *rend, WordDescriptor *word);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_REVERTEVERYWORD_H
