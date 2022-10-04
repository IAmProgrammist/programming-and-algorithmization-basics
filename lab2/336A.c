#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int sign(int num) {
    return num >= 0 ? 1 : -1;
}

int main() {
    int rectangleX, rectangleY;
    scanf("%d %d", &rectangleX, &rectangleY);

    int triangleSideLength = abs(rectangleX) + abs(rectangleY);

    bool isRectangleXPositive = rectangleX > 0;
    int rectangleXSign = sign(rectangleX);
    int rectangleYSign = sign(rectangleY);
    int triangleX1 = triangleSideLength * rectangleXSign * !isRectangleXPositive;
    int triangleY1 = triangleSideLength * rectangleYSign * isRectangleXPositive;
    int triangleX2 = triangleSideLength * rectangleXSign * isRectangleXPositive;
    int triangleY2 = triangleSideLength * rectangleYSign * !isRectangleXPositive;

    printf("%d %d %d %d", triangleX1, triangleY1, triangleX2, triangleY2);

    return 0;
}