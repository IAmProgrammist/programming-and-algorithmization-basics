#include <sys/stat.h>
#include "tester.h"

bool isOrdered(int *a, size_t n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return false;

    return true;
}

void outputArray(int *a, size_t n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void checkTime(void(*sortFunc)(int *, size_t),
               void (*generateFunc)(int *, size_t),
               size_t size, char *experimentName) {
    static size_t runCounter = 1;
    // генерация последовательности
    static int innerBuffer[100000];
    generateFunc(innerBuffer, size);
    printf("Run #%zu| ", runCounter++);
    printf("Name: %s\n", experimentName);
    double time;
    TIME_TEST(sortFunc(innerBuffer, size);, time)
    // результаты замера
    printf("Status: ");
    if (isOrdered(innerBuffer, size)) {
        printf("OK! Time: %.3f s.\n", time);
        // запись в файл
        char filename[256];
        sprintf(filename, "data/%s.csv", experimentName);
        FILE *f = fopen(filename, "a");
        if (f == NULL) {
            printf("FileOpenError %s", filename);
            exit(1);
        }
        fprintf(f, "%zu; %.3f\n", size, time);
        fclose(f);
    } else {
        printf("Wrong!\n");
// вывод массива, который не смог быть отсортирован
        outputArray(innerBuffer, size);
        exit(1);
    }

}

void timeExperiment() {
    // описание функций сортировки
    SortFunc sorts[] = {
            getBubbleSFunc(),
            getSelectionSFunc(),
            getInsertionSFunc(),
            getCombSFunc(),
            getShellSFunc(),
            getRadixSFunc()
    };
    const unsigned FUNCS_N = ARRAY_SIZE(sorts);
    // описание функций генерации
    GeneratingFunc generatingFuncs[] = {
            getRandomGFunc(),
            getOrderedGFunc(),
            getOrderedBackwardsGFunc()
    };
    const unsigned CASES_N = ARRAY_SIZE(generatingFuncs);
    // запись статистики в файл
    for (size_t size = START_ARRAY_SIZE; size <= END_ARRAY_SIZE; size += STEP_ARRAY_SIZE) {
        printf("------------------------------\n");
        printf("Size: %d\n", size);
        for (int i = 0; i < FUNCS_N; i++) {
            for (int j = 0; j < CASES_N; j++) {
                // генерация имени файла
                static char filename[128];
                sprintf(filename, "%s_%s_time",
                        sorts[i].name, generatingFuncs[j].name);
                checkTime(sorts[i].sort,
                          generatingFuncs[j].generate,
                          size, filename);
            }
        }
        printf("\n");
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void countSwap(int *a, int *b, int *counter) {
    (*counter)++;
    swap(a, b);
}