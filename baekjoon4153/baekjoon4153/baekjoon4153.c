#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	int x, y, z;
	int a;
	while (1) {
		scanf("%d %d %d", &x, &y, &z);
		if (x == 0 && y == 0 && z == 0)
			break;
		int x1, x2, x3;
		x1 = x * x, x2 = y * y, x3 = z * z;
		if (x1 + x2 == x3 || x2 + x3 == x1 || x1 + x3 == x2)
			printf("right\n");
		else
			printf("wrong\n");


	}
	return 0;
}