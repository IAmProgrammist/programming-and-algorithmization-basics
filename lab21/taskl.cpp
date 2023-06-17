#include <iostream>
#include <vector>
#include <ctime>

int* getmem(size_t partSize) {
    return new int[partSize];
}

std::vector<int*> getParts(int amountParts, size_t partSize) {
    std::vector<int*> parts;

    for (int i = 0; i < amountParts; i++) {
        try {
            parts.push_back(getmem(partSize));
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
        auto parts = getParts(10, 100000000000000000);
        std::cout << "Success!";
    } catch (const std::exception &e) {
        std::cerr << e.what();
    }

    return 0;
}
