#include "../alg.h"

void printElementsOfSequence_(int lastElement, size_t size) {
    if (size == 0)
        return;
    else {
        int currentElement;
        scanf("%d", &currentElement);

        printElementsOfSequence_(currentElement, size - 1);

        double element = (lastElement + currentElement) / 2.0;

        printf("%.2lf ", element);
    }
}

void printElementsOfSequence(size_t size) {
    if (size != 0) {
        int curElement;
        scanf("%d", &curElement);

        printElementsOfSequence_(curElement, size - 1);
    }
}