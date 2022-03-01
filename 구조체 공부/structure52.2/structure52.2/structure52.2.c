﻿#include <stdio.h>
#include <string.h>    // memcpy 함수가 선언된 헤더 파일

struct Point2D {
    int x;
    int y;
};

int main() {
    struct Point2D* p1 = malloc(sizeof(struct Point2D));
    struct Point2D* p2 = malloc(sizeof(struct Point2D));

    p1->x = 10;
    p1->y = 20;

    memcpy(p2, p1, sizeof(struct Point2D));

    printf("%d %d\n", p2->x, p2->y);

    return 0;
}