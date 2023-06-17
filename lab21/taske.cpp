#include <iostream>

int main() {
    try {
        throw 42;

        std::cout << "Success";
    } catch (int a) {
        std::cerr << a;
    }

    return 0;
}