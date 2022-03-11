#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n == 1)
		printf("\n");
	else {
		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {
				printf("%d\n", i);
				n /= i;
			}
		}
	}
	return 0;
}