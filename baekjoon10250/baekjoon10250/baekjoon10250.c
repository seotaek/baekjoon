#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int floor = 1;
	int x, y, z;//x는 층수, y는 각층의 방수, z는 몇번째 손님
	int a, b, c;
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &x, &y, &z);
		a = z % x;
		b = z / x + 1;
		
		if (a == 0) {
			a = x;
			b =b - 1;
		}
	
		c = a * 100 + b;
		printf("%d\n", c);
	}

	return 0;
}