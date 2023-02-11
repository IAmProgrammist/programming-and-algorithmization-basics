#include "../alg.h"

void swapFloat(float *a, float *b) {
    float c = *a;
    *a = *b;
    *b = c;
}

// обменивает значения по адресам a и b размером n
void swap(void *a, void *b, size_t n) {
    char *pA = (char *) a;
    char *pB = (char *) b;

    for (size_t i = 0; i < n; i++, pA++, pB++) {
        char t = *pA;
        *pA = *pB;
        *pB = t;
    }
}