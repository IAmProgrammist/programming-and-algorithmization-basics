#include "9func.h"

/**
 * <p>Заголовок: <code>void sort2(float *a, float *b)</code>.</p>
 * <p>Назначение: упорядочивает значения по адресам <code>a</code> и <code>b</code> таким образом, что значение по адресу <code>a</code> меньше значения по адресу  <code>b</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 */
void sort2(float *a, float *b) {
    if (*a > *b) swap(a, b);
}

/**
 * <p>Заголовок: <code>void sort2(int *a, int *b)</code>.</p>
 * <p>Назначение: упорядочивает значения по адресам <code>a</code> и <code>b</code> таким образом, что значение по адресу <code>a</code> меньше значения по адресу  <code>b</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 */
void intSort2(int *a, int *b) {
    if (*a > *b) intSwap(a, b);
}