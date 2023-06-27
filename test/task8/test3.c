#include "task8.h"

int main() {
    double area = getArea((Point[]){{0, 0}, {5, 5}, {5, 0}}, 3);

    ASSERT_DOUBLE(area, 12.5);
}