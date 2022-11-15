#include "4func.h"

/**
 * <p>Заголовок: <code>int max3(int a, int b, int c)</code>.</p>
 * <p>Назначение: возвращает максимальное из трёх значений <code>a</code>, <code>b</code> и <code>c</code>
 * @param a первое значение
 * @param b второе значение
 * @param c третье значение
 * @return максимальное из трёх значений <code>a</code>, <code>b</code> и <code>c</code>
 */
int max3(int a, int b, int c) {
    return max2(a, max2(b, c));
}