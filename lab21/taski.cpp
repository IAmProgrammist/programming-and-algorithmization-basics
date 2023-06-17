#include <iostream>
#include <vector>
#include <ctime>

#define SUCCESS_PROB 0.95

int* getmem(float successProb) {
    float r = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);

    if (r > successProb)
        throw std::bad_alloc();

    return new int[10];
}

std::vector<int*> getParts(int amountParts, float successProb) {
    std::vector<int*> parts;

    for (int i = 0; i < amountParts; i++) {
        try {
            parts.push_back(getmem(successProb));
        } catch (const std::bad_alloc &e) {
            std::clog << "free dynamic memory\n";

            for (auto &part : parts)
                delete[] part;

            throw;
        }
    }

    return parts;
}

int main() {
    srand(time(nullptr));

    try {
        auto parts = getParts(10, SUCCESS_PROB);
        std::cout << "Success!";
    } catch (const std::exception &e) {
        std::cerr << e.what();
    }

    return 0;
}