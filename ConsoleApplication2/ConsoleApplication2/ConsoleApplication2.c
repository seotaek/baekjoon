#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>



int main() {
	int x;
	scanf("%d", &x);
	char* s1 = malloc(sizeof(char) * 100);
	int len, flag;
	int count = 0;
	for (int i = 0; i < x; i++) {
		scanf("%s", s1);
		len = strlen(s1);

		for (int j = 0; j < len; j++) {
			if (len == 1) {
				flag = 1;
				break;
			}
			for (int k = j + 1; k < len; k++) {
				if (s1[j] != s1[k])
					flag = 1;
				if (s1[j] == s1[k] && k - j == 1) {
					flag = 1;
					break;
				}
				if (s1[j] == s1[k] && k - j != 1) {
					flag = 0;
					break;
				}
			}
			if (flag == 0) break;
		}
		if (flag == 1) count++;

	}
	printf("%d\n", count);

	free(s1);
	return 0;
}