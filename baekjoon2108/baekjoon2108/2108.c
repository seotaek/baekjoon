#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int total(int sum, int n) {
	double x = (double)sum / n;
	if (x > 0)x += 0.5;
	else x -= 0.5;
	return ((int)x);

}

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}

int mode(int s2[]) {
	int freq = 0;

	for (int i = 0; i < 8001; i++)
		if (s2[i] > s2[freq])
			freq = i;
	
	for (int i = freq + 1; i < 8001; i++) {
		if (s2[freq] == s2[i]) {
			freq = i;
			break;
		}
	}
	return (freq - 4000);
}


int main() {
	int n;
	scanf("%d", &n);
	int* s1 = malloc(sizeof(int) * n);
	int s2[8001] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf("%d", &s1[i]);
		int x = s1[i] + 4000;
		s2[x]++;
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += s1[i];
	printf("%d\n", total(sum, n));//산술기하

	qsort(s1, n, sizeof(int), compare);
	printf("%d\n", s1[(n-1)/2]);//중앙값

	printf("%d\n", mode(s2));
	
	int range = s1[n - 1] - s1[0];
	if (n < 2)
		printf("0\n");
	else
		printf("%d\n", range);//범위

	



	free(s1);

	return 0;
}