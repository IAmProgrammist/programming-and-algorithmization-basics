#include <iostream>

int main() {
    std::cout << std::boolalpha << true << ' ' << false << '\n';
    std::cout << true << ' ' << false << '\n';
    std::cout << std::noboolalpha << true << ' ' << false << '\n';
    std::cout << true << ' ' << false << '\n';

    return 0;
}
