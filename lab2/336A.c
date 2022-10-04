#include <stdio.h>
#include <stdbool.h>

int abs(int x) {
    return x >= 0 ? x : -x;
}

int sign(int num) {
    return num >= 0 ? 1 : -1;
}

int main() {
    int rectangleX, rectangleY;
    scanf("%d %d", &rectangleX, &rectangleY);

    int triangleSideLength = abs(rectangleX) + abs(rectangleY);

    bool isRectangleXPositive = rectangleX > 0;
    int triangleX1 = triangleSideLength * sign(rectangleX) * !isRectangleXPositive;
    int triangleY1 = triangleSideLength * sign(rectangleY) * isRectangleXPositive;
    int triangleX2 = triangleSideLength * sign(rectangleX) * isRectangleXPositive;
    int triangleY2 = triangleSideLength * sign(rectangleY) * !isRectangleXPositive;

    printf("%d %d %d %d", triangleX1, triangleY1, triangleX2, triangleY2);

    return 0;
}