#include <stdio.h>

long long min(long long a, long long b) {
    return a < b ? a : b;
}

int main() {
    long long initialCommentaryBoxes, delegations, feeToBuild, feeToDemolish;
    scanf("%lld %lld %lld %lld", &initialCommentaryBoxes, &delegations, &feeToBuild, &feeToDemolish);

    long long int extraCommentaryBoxes = initialCommentaryBoxes % delegations;
    long long minFee = min(feeToDemolish * extraCommentaryBoxes,
                           feeToBuild * (delegations - extraCommentaryBoxes));

    printf("%lld", minFee);

    return 0;
}