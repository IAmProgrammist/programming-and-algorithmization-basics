#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define DOUBLE_EPSILON 0.000000000000001

bool fcompare(double a, double b) {
    return fabs(a - b) < DOUBLE_EPSILON;
}

int main() {
    double input;
    scanf("%lf", &input);

    if (fcompare(input, 0))
        printf("NO");
    else {
        double prevNumber = input;

        scanf("%lf", &input);

        if (fcompare(input, 0))
            printf("NO");
        else {
            double requiredDelta = input - prevNumber;
            prevNumber = input;
            bool isDeltaComplied = true;
            scanf("%lf", &input);

            while (!fcompare(input, 0) && isDeltaComplied) {
                double currentDelta = input - prevNumber;

                if (!fcompare(currentDelta, requiredDelta))
                    isDeltaComplied = false;

                prevNumber = input;
                scanf("%lf", &input);
            }

            if (isDeltaComplied)
                printf("YES");
            else
                printf("NO");

        }
    }

    return 0;
}