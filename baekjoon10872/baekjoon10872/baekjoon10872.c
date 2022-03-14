#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int fact = 1;
	for (int i = n; i > 0; i--)
		fact *= i;

	printf("%d\n", fact);
	return 0;
}