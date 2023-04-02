#include "generateRandom.h"

void generateRandom(int *a, size_t n) {
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;
}

GeneratingFunc getRandomGFunc() {
    return (GeneratingFunc) {generateRandom, "random"};
}