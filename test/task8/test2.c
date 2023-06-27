#include "task8.h"

int main() {
    double area = getArea((Point[]){{1, 1}, {5, 5}}, 2);

    ASSERT_DOUBLE(area, 0);
}