#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	int count;
	int flag;
	while (1) {
		count = 0;
		scanf("%d", &n);
		if (n == 0)
			break;
		for (int i = n+1; i <= 2*n; i++) {
			flag = 0;
			if (i == 2) {
				flag = 0;
				continue;
			}
			for (int j = 2; j < i; j++) {
				if (i % j == 0)
					flag = 1;
			}
			if (flag == 0)
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}