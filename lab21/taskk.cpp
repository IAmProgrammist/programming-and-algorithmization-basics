#include <vector>
#include <iostream>
#include <ctime>

int main() {
    srand(time(nullptr));
    rand();

    try {
        size_t n = 42;
        std::vector<int> arr(n, 42);

        std::clog << "Now I gotta get the last element of array in C++\n";

        float r = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);

        if (r > 0.5) {
            std::clog << "I suppose arrays here are starting at 0, so answer is: \n";
            std::clog << arr.at(n - 1);
        } else {
            std::clog << "I suppose arrays here are starting at 1, so answer is: \n";
            std::clog << arr.at(n);
        }
    } catch (std::logic_error &e) {
        std::cerr << "My worst mistake ever caused by " << e.what();
    }

    return 0;
}