#include "task8.h"

int main() {
    double area = getArea((Point[]) {{2, 1},
                                     {5, 3},
                                     {6, 6},
                                     {5, 7},
                                     {3, 6},
                                     {2, 8},
                                     {1, 5}}, 7);

    ASSERT_DOUBLE(area, 19.5);
}