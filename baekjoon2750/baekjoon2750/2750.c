#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bubble_sort(int arr[], int count) {
	int temp;

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int* s1 = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &s1[i]);
	bubble_sort(s1, n);
	for (int i = 0; i < n; i++)
		printf("%d\n", s1[i]);
	free(s1);
	return 0;
}