#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int m, n;
	scanf("%d %d", &m, &n);
	int* s1 = malloc(sizeof(int) * 1000001);
	for (int i = 0; i < 1000001; i++)
		s1[i] = 0;
	s1[0] = 1;
	s1[1] = 1;
	for (int i = 2; i <= n; i++) {//~ÀÇ ¹è¼ö
		for (int j = 2; i * j <= n; j++) {
			s1[i * j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (s1[i] == 0)
			printf("%d\n", i);
	}
	free(s1);
	return 0; 
}

