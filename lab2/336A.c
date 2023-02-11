#include <stdio.h>
#include <math.h>

int sign(int num) {
    return num >= 0 ? 1 : -1;
}

int main() {
    int rectangleX, rectangleY;
    scanf("%d %d", &rectangleX, &rectangleY);

    int triangleSideLength = abs(rectangleX) + abs(rectangleY);

    int triangleX1, triangleY1, triangleX2, triangleY2;
    if (rectangleX > 0) {
        triangleX1 = triangleSideLength * sign(rectangleX);
        triangleY1 = 0;
        triangleX2 = 0;
        triangleY2 = triangleSideLength * sign(rectangleY);
    } else {
        triangleX1 = 0;
        triangleY1 = triangleSideLength * sign(rectangleY);
        triangleX2 = triangleSideLength * sign(rectangleX);
        triangleY2 = 0;
    }

    printf("%d %d %d %d", triangleX1, triangleY1, triangleX2, triangleY2);

    return 0;
}