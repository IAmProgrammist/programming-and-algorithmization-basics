#include <iostream>

bool division(int a, int b, int &res) {
    if (!b) return false;

    res = a / b;
    return true;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    int res;
    if (division(a, b, res))
        std::cout << res;
    else
        std::cerr << "b must not be equal to 0" << std::endl;

    return 0;
}