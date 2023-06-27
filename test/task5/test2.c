#include "task5.h"

int main() {
    int n = 5;

    ASSERT_INT(josephProblemFindSurvivor(n, 6), 5);
    ASSERT_INT(josephProblemFindSurvivor(n, 7), 3);
    ASSERT_INT(josephProblemFindSurvivor(n, 8), 4);
    ASSERT_INT(josephProblemFindSurvivor(n, 9), 1);
    ASSERT_INT(josephProblemFindSurvivor(n, 10), 2);
}