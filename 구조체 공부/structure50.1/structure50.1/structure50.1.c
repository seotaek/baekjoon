#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>    // sqrt 함수가 선언된 헤더 파일

struct Point2D {
    int x;
    int y;
};

int main() {
    struct Point2D p1;
    struct Point2D p2;

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);
    scanf("%d", &p2.x);
    scanf("%d", &p2.y);

    int a = p2.x - p1.x;
    int b = p2.y - p1.y;

    double c = sqrt((a * a) + (b * b));

    printf("%f\n", c);

    return 0;
}