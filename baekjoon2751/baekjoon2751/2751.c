#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;
	else if (num1 > num2)
		return 1;
	else
		return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	
	int* s1 = malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", &s1[i]);
	
	printf("\n");
	
	qsort(s1, n, sizeof(int), compare);
	
	for (int i = 0; i < n; i++)
		printf("%d\n", s1[i]);
	free(s1);
	return 0;
}