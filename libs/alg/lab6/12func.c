#include "../alg.h"

int getTriangleTypeLength(int a, int b, int c) {
    if (isTrianglePossible(a, b, c)) {
        intSort3(&a, &b, &c);

        int bigSideSquare = c * c;
        int sumOfSquaresOfSmallerSides = a * a + b * b;

        if(fcompare(bigSideSquare, sumOfSquaresOfSmallerSides))
            return 1;
        else if (bigSideSquare > sumOfSquaresOfSmallerSides)
            return 2;
        else
            return 0;
    } else return -1;
}