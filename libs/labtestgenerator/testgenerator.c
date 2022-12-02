#include "testgenerator.h"
#include <stdio.h>
#include <io.h>

/*void registerTest(const char *testTaskPath) {
    cJSON *json = cJSON_Parse("{\"hellomessage\":\"Привет мир!\"}");
    const char *message = json->child;
    mkdir("C:/Users/vladi/Desktop/ws/files");
    FILE *writefile = fopen("C:/Users/vladi/Desktop/ws/files/gay.txt", "w");
    fprintf(writefile, message);
    //printf(message);
}*/

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

void registerTestFromFilePath(const char *filePath, const char *taskPath, report formattedInput, report formattedOutput) {
    cJSON *reportObject = generateReportJSON(formattedInput, formattedOutput);
    char *source = readFileContents(filePath);
    cJSON *rootObject = cJSON_Parse(source);

    registerToJSONTestFromJSON(rootObject, taskPath, reportObject);

    cJSON_Delete(rootObject);
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
    registerToJSONTestFromJSON(rootObject, taskPath, reportObject);

    cJSON_Delete(reportObject);
    cJSON_Delete(rootObject);
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

extern void registerToJSONTestFromJSON(cJSON *file, const char *taskPath, cJSON *report) {
    int beginIndex = 0;

    while (strlen(taskPath + beginIndex) != 0) {
        int objectNameSize = 0;
        bool isEndPath;
        while (1) {
            if (taskPath[objectNameSize] == '/') {
                isEndPath = false;
                break;
            } else if (taskPath[objectNameSize] == '\0') {
                isEndPath = true;
                break;
            }

            objectNameSize++;
        }

        char nextTaskPath[objectNameSize + 1];
        strcpy_s(nextTaskPath, (objectNameSize + 1) * sizeof(char), taskPath + beginIndex);
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
                file = cJSON_AddObjectToObject(file, nextTaskPath), taskPath + objectNameSize,
                                           report;
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