#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int* s1 = malloc(sizeof(int) * 10001);
	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		s1[num]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < s1[i]; j++) {
			printf("%d\n", i);
		}
	}
	free(s1);
	return 0;
}