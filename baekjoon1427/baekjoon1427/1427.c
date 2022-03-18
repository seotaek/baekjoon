#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	int count = 0;
	int* s1 = malloc(sizeof(int) * 11);
	for (int i = 0; i < 11; i++)
		s1[i] = 0;
	int a = 0;
	int m;
	while (n != 0) {
		m = n % 10;
		s1[a] = m;
		n /= 10;
		a++;
		count++;
	}
	int temp;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - 1; j++) {
			if (s1[j] < s1[j + 1]) {
				temp = s1[j];
				s1[j] = s1[j + 1];
				s1[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < count; i++)
		printf("%d", s1[i]);
	printf("\n");
	free(s1);
	return 0;
}