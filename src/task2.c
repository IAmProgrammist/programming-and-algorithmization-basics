#include <stdbool.h>

static int max(int a, int b) {
    return a > b ? a : b;
}

bool canPlaceTwoHousesInSquare(int a, int b, int p, int q, int r, int s) {
    return max(p, s) <= a && q + r <= b ||
           max(p, r) <= a && q + s <= b ||
           max(q, s) <= a && p + r <= b ||
           max(q, r) <= a && p + s <= b ||
           p + s <= a && max(q, r) <= b ||
           p + r <= a && max(q, s) <= b ||
           q + s <= a && max(p, r) <= b ||
           q + r <= a && max(p, s) <= b;
}