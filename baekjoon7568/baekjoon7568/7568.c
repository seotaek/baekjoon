#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	int* s1 = malloc(sizeof(int) * n);
	int* s2 = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &s1[i], &s2[i]);

	for (int i = 0; i < n; i++) {
		int k = 1;
		for (int j = 0; j < n; j++) {
			if (s1[i] < s1[j] && s2[i] < s2[j])
				k++;
		}
		printf("%d ", k);
	}
	printf("\n");

	free(s1);
	free(s2);
	return 0;
}