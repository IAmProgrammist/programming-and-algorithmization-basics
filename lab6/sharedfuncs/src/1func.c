#include "1func.h"

/** <p>Заголовок: <code>double abs(double a)</code>.</p>
 * <p>Назначение: возвращает модуль значения <code>a</code></p>
 * @param a значение из которого будет вычислен и возвращён модуль
 * @return модуль значения <code>a</code>
 */
double abs(double a) {
    return a < 0 ? -a : a;
}