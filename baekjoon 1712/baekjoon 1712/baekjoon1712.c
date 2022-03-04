#define _CRT_SECURE_NO_WARNING
#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf_s("%d %d %d", &a, &b, &c);
	d = a / (c - b) + 1;
	if (b >= c)
		printf("-1");
	else
		printf("%d\n", d);
	return 0;
}