#include "8func.h"

/** <p>Заголовок: <code>void cycleShift(unsigned long long *pX, int k)</code></p>
 * <p>Назначение: выполняет циклический сдвиг числа по адресу <code>pX</code> на <code>k</code> влево.</p>
 * @param pX адрес значение в котором будет выполняться сдвиг
 * @param k количество циклических сдвигов влево
 */
void cycleShift(unsigned long long *pX, int k) {
    if (*pX == 0)
        return;

    while (k--) {
        unsigned long long copyX = *pX;
        *pX = 0;
        int pow = 1;

        while (copyX & (~1)) {
            *pX += (copyX & 1) << pow;
            copyX >>= 1;
            pow++;
        }

        *pX += 1;
    }
}