#include <iostream>

int division(int a, int b) {
    if (b != 0)
        return a / b;
    else
        std::cerr << "b must not be equal to 0" << std::endl;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    auto res = division(a, b);
    std::cout << res;

    return 0;
}