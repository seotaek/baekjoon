#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int* s1 = malloc(sizeof(int) * (n+1));
	for (int i = 0; i < n + 1; i++)
		s1[i] = 0;
	s1[1] = 1;
	for (int i = 2; i < n + 1; i++) {
		s1[i] = s1[i - 1] + s1[i - 2];
	}
	printf("%d\n", s1[n]);
	free(s1);
	return 0;
}