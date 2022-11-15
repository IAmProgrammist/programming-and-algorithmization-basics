#include "8func.h"

/**
 * <p>Заголовок: <code>void swap(float *a, float *b)</code>.</p>
 * <p>Назначение: обменивает значения по указателям <code>a</code>, <code>b</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 */
void swap(float *a, float *b) {
    float c = *a;
    *a = *b;
    *b = c;
}

/**
 * <p>Заголовок: <code>void swap(int *a, int *b)</code>.</p>
 * <p>Назначение: обменивает значения по указателям <code>a</code>, <code>b</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 */
void intSwap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}