#include <iostream>
#include <string>

int division(int a, int b) {
    if (!b) throw std::string("Division by zero");

    return a / b;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    auto res = division(a, b);
    std::cout << res;

    return 0;
}