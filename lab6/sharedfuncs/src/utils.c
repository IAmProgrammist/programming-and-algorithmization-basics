#include <math.h>

#define EPS 0.0000001

/**
 * <p>Заголовок: <code>int fcompare(double a, double b)</code>.</p>
 * <p>Назначение: сравнивает значения <code>a</code> и <code>b</code> и проверяет их на равенство с определённой точностью (<code>EPS</code> = 0.0000001)
 * @param a первое значение
 * @param b второе значение
 * @return true если <code>a</code> = <code>b</code> с определённой точностью
 * @return false если <code>a</code> != <code>b</code>
 */
int fcompare(double a, double b) {
    return fabs(a - b) < EPS;
}