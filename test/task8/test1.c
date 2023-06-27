#include "task8.h"

int main() {
    double area = getArea((Point[]){}, 0);

    ASSERT_DOUBLE(area, 0);
}