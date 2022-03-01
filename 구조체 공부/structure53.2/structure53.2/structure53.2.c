#include<stdio.h>
#include<stdlib.h>

struct Point2D {
	int x;
	int y;
};

int main() {
	struct Point2D* p[3];
	for (int i = 0; i < sizeof(p)/sizeof(struct Point2D*); i++)
		p[i] = malloc(sizeof(struct Point2D));
    p[0]->x = 10;    // 인덱스로 요소에 접근한 뒤 화살표 연산자로 멤버에 접근
    p[0]->y = 20;
    p[1]->x = 30;
    p[1]->y = 40;
    p[2]->x = 50;
    p[2]->y = 60;

    printf("%d %d\n", p[0]->x, p[0]->y);    // 10 20
    printf("%d %d\n", p[1]->x, p[1]->y);    // 30 40
    printf("%d %d\n", p[2]->x, p[2]->y);    // 50 60

    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D*); i++)    // 요소 개수만큼 반복
    {
        free(p[i]);    // 각 요소의 동적 메모리 해제
    }

    return 0;
}