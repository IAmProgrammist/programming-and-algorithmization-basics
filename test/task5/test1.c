#include "task5.h"

int main() {
    int n = 5;

    ASSERT_INT(josephProblemFindSurvivor(n, 1), 5);
    ASSERT_INT(josephProblemFindSurvivor(n, 2), 3);
    ASSERT_INT(josephProblemFindSurvivor(n, 3), 4);
    ASSERT_INT(josephProblemFindSurvivor(n, 4), 1);
    ASSERT_INT(josephProblemFindSurvivor(n, 5), 2);
}