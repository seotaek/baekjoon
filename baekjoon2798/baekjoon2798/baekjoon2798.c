#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int* s1 = malloc(sizeof(int) * n);
	int max=0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &s1[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for(int k=j+1;k<n;k++){
				sum = s1[i] + s1[j] + s1[k];
				if (sum > max && sum <= m)
					max = sum;
			}
		}
	}
	printf("%d\n", max);
	free(s1);
	return 0;
}