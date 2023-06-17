#include <iostream>

void infinitivePause() {
    while (true);
}

int main() {
    std::cerr << "Cerr is not buffered!\n";
    std::clog << "Clog is not buffered!\n";
    infinitivePause();

    return 0;
}
