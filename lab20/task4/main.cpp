#include <fstream>
#include <iostream>

long long getSumOfMaxesInRows(const std::string &filename) {
    long long sum = 0;
    std::ifstream inputFile(filename);

    if (!inputFile)
        throw std::runtime_error("File doesn't exist");

    long long height, width;

    inputFile >> height >> width;

    for (int i = 0; i < height; i++) {
        long long max;
        inputFile >> max;

        for (int j = 1; j < width; j++) {
            long long tmp;
            inputFile >> tmp;

            if (tmp > max)
                max = tmp;
        }

        sum += max;
    }

    return sum;
}

int main() {
    std::cout << getSumOfMaxesInRows("input.txt");

    return 0;
}