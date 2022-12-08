#include <sys/stat.h>
#include "testgenerator.h"

#define DEFAULT_REPORT_SIZE 8192
#define LLONG_SIZE sizeof(long long)

cJSON *generateReportJSON(report formattedInput, report formattedOutput) {
    cJSON *reportObject = cJSON_CreateObject();

    cJSON_AddStringToObject(reportObject, "input", formattedInput);
    cJSON_AddStringToObject(reportObject, "output", formattedOutput);

    return reportObject;
}

cJSON *generateExpandedReportJSON(report formattedInput, report formattedOutput, report explanation) {
    cJSON *reportObject = cJSON_CreateObject();

    cJSON_AddStringToObject(reportObject, "input", formattedInput);
    cJSON_AddStringToObject(reportObject, "output", formattedOutput);
    cJSON_AddStringToObject(reportObject, "explanation", explanation);

    return reportObject;
}

char *readFileContents(const char *filePath) {
    FILE *readFile = fopen(filePath, "r");
    char *source = NULL;

    if (readFile == NULL) {
        fprintf(stderr, "Error reading from file %s\n", filePath);
        free(source);
        fclose(readFile);
        return NULL;
    }

    if (fseek(readFile, 0L, SEEK_END) == 0) {

        long bufferSize = ftell(readFile);
        if (bufferSize == -1) {
            fprintf(stderr, "Error reading from file %s\n", filePath);
            free(source);
            fclose(readFile);
            return NULL;
        }

        source = malloc(sizeof(char) * (bufferSize + 1));

        if (fseek(readFile, 0L, SEEK_SET) != 0) {
            fprintf(stderr, "Error reading from file %s\n", filePath);
            free(source);
            fclose(readFile);
            return NULL;
        }

        size_t newLen = fread(source, sizeof(char), bufferSize, readFile);
        if (ferror(readFile) != 0) {
            fprintf(stderr, "Error reading from file %s\n", filePath);
            free(source);
            fclose(readFile);
            return NULL;
        } else {
            source[newLen++] = '\0';
        }
    }

    fclose(readFile);

    return source;
}

void writeContent(const char *filePath, char *content) {
    FILE *writefile = fopen(filePath, "w");
    if (writefile != NULL) {
        fprintf(writefile, content);
    } else {
        fprintf(stderr, "Didn't succeed to write contents to file %s", filePath);
    }

    fflush(writefile);
    fclose(writefile);
}

void
registerTestFromFilePath(const char *filePath, const char *taskPath, report formattedInput, report formattedOutput) {
    cJSON *reportObject = generateReportJSON(formattedInput, formattedOutput);
    char *source = readFileContents(filePath);
    cJSON *rootObject = cJSON_Parse(source);

    if (rootObject == NULL)
        rootObject = cJSON_CreateObject();

    registerToJSONTestFromJSON(rootObject, taskPath, reportObject);

    char *outputData = cJSON_Print(rootObject);

    writeContent(filePath, outputData);

    cJSON_Delete(rootObject);
    free(outputData);
    free(source);
}

void registerTestFromJSON(cJSON *file, const char *taskPath, report formattedInput, report formattedOutput) {
    cJSON *reportObject = generateReportJSON(formattedInput, formattedOutput);

    registerToJSONTestFromJSON(file, taskPath, reportObject);
}

void registerExpandedTestFromFilePath(const char *filePath, const char *taskPath, report formattedInput,
                                      report formattedOutput, report explanation) {
    cJSON *reportObject = generateExpandedReportJSON(formattedInput, formattedOutput, explanation);
    char *source = readFileContents(filePath);
    cJSON *rootObject = cJSON_Parse(source);

    if (rootObject == NULL)
        rootObject = cJSON_CreateObject();

    registerToJSONTestFromJSON(rootObject, taskPath, reportObject);

    char *outputData = cJSON_Print(rootObject);

    writeContent(filePath, outputData);

    cJSON_Delete(rootObject);
    free(outputData);
    free(source);
}

void registerExpandedTestFromJSON(cJSON *file, const char *taskPath, report formattedInput, report formattedOutput,
                                  report explanation) {
    cJSON *reportObject = generateExpandedReportJSON(formattedInput, formattedOutput, explanation);

    registerToJSONTestFromJSON(file, taskPath, reportObject);
}

void registerToJSONTestFromFilePath(const char *filePath, const char *taskPath, cJSON *report) {
    char *source = readFileContents(filePath);
    cJSON *rootObject = cJSON_Parse(source);
    registerToJSONTestFromJSON(rootObject, taskPath, report);

    cJSON_Delete(rootObject);
    free(source);
}

void registerToJSONTestFromJSON(cJSON *file, const char *taskPath, cJSON *report) {
    int beginIndex = 0;

    while (beginIndex < strlen(taskPath)) {
        int objectNameSize = 0;
        bool isEndPath;
        while (1) {
            if (taskPath[objectNameSize + beginIndex] == '/') {
                isEndPath = false;
                break;
            } else if (taskPath[objectNameSize + beginIndex] == '\0') {
                isEndPath = true;
                break;
            }

            objectNameSize++;
        }

        char nextTaskPath[objectNameSize + 1];
        strncpy(nextTaskPath, taskPath + beginIndex, (objectNameSize + 1) * sizeof(char));
        nextTaskPath[objectNameSize] = '\0';
        beginIndex += objectNameSize + 1;

        cJSON *it = file->child;

        while (it != NULL && (strcmp(it->string, nextTaskPath) != 0))
            it = it->next;

        if (isEndPath) {
            if (it == NULL)
                cJSON_AddItemToArray(cJSON_AddArrayToObject(file, nextTaskPath), report);
            else {
                if (it->type != cJSON_Array) {
                    fprintf(stderr, "End object %s is not an array\n", nextTaskPath);
                    return;
                }

                cJSON_AddItemToArray(it, report);
            }
        } else {
            if (it == NULL)
                file = cJSON_AddObjectToObject(file, nextTaskPath);
            else {
                if (it->type != cJSON_Object) {
                    fprintf(stderr, "Intermediate object %s is not an object\n", nextTaskPath);
                    return;
                }

                file = it;
            }
        }
    }
}

char *prettyPrintArray(const void *const array, const size_t blockSize, const size_t arraySize, char *(*toString)(void *, size_t),
                 bool includeBrackets) {
    char *prettyPrintedArray = malloc(DEFAULT_REPORT_SIZE * sizeof(char));
    prettyPrintedArray[0] = '\0';

    if (includeBrackets)
        prettyPrintedArray[0] = '{';

    for (void *element = array; element < array + blockSize * arraySize; element += blockSize) {
        void* copyElement = malloc(blockSize);
        memcpy(copyElement, element, blockSize);
        char *toStringed = toString(element, blockSize);
        strcat(prettyPrintedArray, toString(element, blockSize));
        strcat(prettyPrintedArray, ", ");

        printf("%p %d\n", element, *((int*)element));

        free(toStringed);
        free(copyElement);
    }

    strcat(prettyPrintedArray, toString(array + blockSize * arraySize, blockSize));

    if (includeBrackets)
        strcat(prettyPrintedArray, "}");

    return prettyPrintedArray;
}

char *toStringIntRegular(const void * const num, size_t blockSize) {
    unsigned long long mask;
    int8_t castNum8;
    int8_t castNum16;
    int8_t castNum32;
    int8_t castNum64;
    char *str = malloc(DEFAULT_REPORT_SIZE * sizeof(char));
    switch (blockSize) {
        case 1:
            castNum8 = *((int8_t*) num);
            sprintf(str, "%d", castNum8);
            break;
    }

    char *str = malloc(DEFAULT_REPORT_SIZE * sizeof(char));
    sprintf(str, "%lld", castNum);
    return str;
}

char *toStringUIntRegular(const void * const num, size_t blockSize) {
    if (blockSize > LLONG_SIZE) {
        fprintf(stderr, "Failed to print number wider than unsigned long long type");
        return "\0";
    }

    unsigned long long castNum = (*((unsigned long long *) num));

    char *str = malloc(DEFAULT_REPORT_SIZE * sizeof(char));
    sprintf(str, "%llu", castNum);
    return str;
}