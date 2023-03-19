#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_STRING__H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_STRING__H

#include <stdint.h>
#include <ctype.h>
#include <memory.h>
#include <stdio.h>
#include <stdbool.h>

#define ASSERT_STRING(expected, got) assertString(expected, got, \
__FILE__, __FUNCTION__, __LINE__)

#define ASSERT_BOOL(expected, got) assertBool(expected, got, \
__FILE__, __FUNCTION__, __LINE__)

#define MAX_STRING_SIZE 1000
#define MAX_N_WORDS_IN_STRING 100
#define MAX_WORD_SIZE 20

size_t strlen(const char *begin);

char* find(char *begin, char *end, int ch);

char* findNonSpace(char *begin);

char* findSpace(char *begin);

char* findNonSpaceReverse(char *rbegin, const char *rend);

char* findSpaceReverse(char *rbegin, const char *rend);

int strcmp(const char *lhs, const char *rhs);

char* copy(const char *beginSource, const char *endSource,
           char *beginDestination);

char* copyIf(char *beginSource, const char *endSource,
             char *beginDestination, int (*f)(int));

char* copyIfReverse(char *rbeginSource, const char *rendSource,
                    char *beginDestination, int (*f)(int));

void assertString(const char *expected, char *got,
                  char const *fileName, char const *funcName,
                  int line);

void assertBool(const bool expected, bool got,
                  char const *fileName, char const *funcName,
                  int line);

#endif