#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		int* s1 = malloc(sizeof(int) * 246913);
		for (int i = 0; i < 246913; i++)
			s1[i] = 0;
		s1[0] = 1;
		s1[1] = 1;
		for (int i = 2; i <= n*2; i++) {
			for (int j = 2; i * j <= n*2; j++)
				s1[i * j] = 1;
		}
		int count = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (s1[i] == 0)
				count++;
		}
		printf("%d\n", count);
		free(s1);
	}
	return 0;
}