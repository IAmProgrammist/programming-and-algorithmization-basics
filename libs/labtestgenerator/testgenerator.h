#ifndef TESTGENERATOR_H
#define TESTGENERATOR_H

#include "../cJSON/cJSON.h"
#include "../cJSON/cJSON_Utils.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef const char * report;

cJSON *generateReportJSON(report formattedInput, report formattedOutput);

cJSON *generateExpandedReportJSON(report formattedInput, report formattedOutput, report explanation);

char *readFileContents(const char *filePath);

void registerTestFromFilePath(const char* filePath, const char* taskPath, report formattedInput, report formattedOutput);

void registerTestFromJSON(cJSON *file, const char* taskPath, report formattedInput, report formattedOutput);

void registerExpandedTestFromFilePath(const char* filePath, const char* taskPath, report formattedInput, report formattedOutput, report explanation);

void registerExpandedTestFromJSON(cJSON *file, const char* taskPath, report formattedInput, report formattedOutput, report explanation);

void registerToJSONTestFromFilePath(const char* filePath, const char* taskPath, cJSON *report);

void registerToJSONTestFromJSON(cJSON *file, const char *taskPath, cJSON *report);

void writeContent(const char *filePath, char *content);

char *prettyPrintArray(const void *const array, const size_t blockSize, const size_t arraySize, char *(*toString)(void *, size_t),
                       bool includeBrackets) ;

char *toStringIntRegular(const void * const num, size_t blockSize);

char *toStringUIntRegular(const void * const num, size_t blockSize);

#endif //TESTGENERATOR_H
