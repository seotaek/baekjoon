#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int floor = 1;
	int x, y, z;//x�� ����, y�� ������ ���, z�� ���° �մ�
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