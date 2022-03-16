#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	char **s1 = malloc(sizeof(char*) * m);
	for (int i = 0; i < m; i++) {
		s1[i] = malloc(sizeof(char) * n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &s1[i][j]);
		}
		
	}
	int count = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < m-1; j++) {
			if (s1[i][j] == s1[i + 1][j]) {
				count++;
				
			}
			else if (s1[i][j] == s1[i][j + 1])
				count++;
		}
	}
	printf("%d\n", count);

	for (int i = 0; i < m; i++) {
		free(s1[i]);
	}
	free(s1);

	return 0;
}