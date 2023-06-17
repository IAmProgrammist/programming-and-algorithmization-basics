#include <iostream>

int division(int a, int b) {
    if (!b) throw std::string("Division by zero");

    return a / b;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    try {
        auto res = division(a, b);
        std::cout << res;
    } catch (const std::string &s) {
        std::cerr << s;
    }

    return 0;
}