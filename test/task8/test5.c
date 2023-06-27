#include "task8.h"

int main() {
    double area = getArea((Point[]) {{2, 1},
                                     {1, 5},
                                     {2, 8},
                                     {3, 6},
                                     {5, 7},
                                     {6, 6},
                                     {5, 3}}, 7);

    ASSERT_DOUBLE(area, 19.5);
}