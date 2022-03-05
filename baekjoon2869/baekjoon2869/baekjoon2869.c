#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	
	int y = v - b;
	int z = a - b;
	int x = y / z;
	if (y % z == 0)
		printf("%d\n", x);
	
	else
		printf("%d\n", x + 1);
	return 0;
}