#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		int x = i;
		int sum = i;
		int y;
		while (1) {
			y = x % 10;
			sum =sum + y;
			x /= 10;
			if (x == 0)
				break;
		}
		if (sum == n) {
			printf("%d\n", i);
			n = 0;
			break;
		}
	}
	if (n != 0)
		printf("0\n");
	return 0;
}