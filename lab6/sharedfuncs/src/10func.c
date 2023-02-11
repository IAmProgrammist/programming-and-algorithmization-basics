#include "10func.h"

/**
 * <p>Заголовок: <code>void sort3(float *a, float *b, float *c)</code>.</p>
 * <p>Назначение: упорядочивает значения по адресам <code>a</code>, <code>b</code> и <code>c</code> таким образом, что значение по адресу <code>a</code> меньше значения по адресу <code>b</code>; значение по адресу <code>b</code> меньше значения по адресу <code>c</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 * @param c ссылка на третье значение
 */
void sort3(float *a, float *b, float *c) {
    sort2(a, b);
    sort2(b, c);
    sort2(a, b);
}

/**
 * <p>Заголовок: <code>void sort3(int *a, int *b, int *c)</code>.</p>
 * <p>Назначение: упорядочивает значения по адресам <code>a</code>, <code>b</code> и <code>c</code> таким образом, что значение по адресу <code>a</code> меньше значения по адресу <code>b</code>; значение по адресу <code>b</code> меньше значения по адресу <code>c</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 * @param c ссылка на третье значение
 */
void intSort3(int *a, int *b, int *c) {
    intSort2(a, b);
    intSort2(b, c);
    intSort2(a, b);
}