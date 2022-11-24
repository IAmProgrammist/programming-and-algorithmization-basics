#include "2func.h"

/** <p>Заголовок: <code>int sign(double x)</code>.</p>
 * <p>Назначение: возвращает -1, 0 или 1 в зависимости от знака значения <code>x</code></p>
 * @param x значение из которого вычисляется значение функции sign
 * @return 1, если <code>x</code> > 0
 * @return 0, если <code>x</code> = 0
 * @return -1, если <code>x</code> \< 0
 */
int sign(double x) {
    return (x > 0) - (x < 0);
}