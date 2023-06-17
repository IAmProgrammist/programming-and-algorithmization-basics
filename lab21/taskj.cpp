#include <iostream>

int main() {
    try {
        throw std::logic_error("<Error description>");
    } catch (const std::exception &e) {
        std::cerr << e.what();
    }

    return 0;
}