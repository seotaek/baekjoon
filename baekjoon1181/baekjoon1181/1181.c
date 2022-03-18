#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char arr[51];
	int len;
}word;

int compare(const void* a, const void* b) {
	word* s1 = (word*)a;
	word* s2 = (word*)b;

	if (s1->len > s2->len)
		return 1;
	else if (s1->len < s2->len)
		return -1;
	else {
		if (strcmp(s1->arr, s2->arr) < 0)
			return -1;
		else
			return 1;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	word* W1 = calloc(n + 1, sizeof(word));
	
	for (int i = 0; i < n; i++) {
		scanf("%s", W1[i].arr);
		W1[i].len = strlen(W1[i].arr);

		//중복 제한해주기
		for (int j = 0; j < i; j++) {
			if (strcmp(W1[j].arr, W1[i].arr) == 0) {
				n -= 1;
				i -= 1;
				break;
			}
		}
	}
	qsort(W1, n, sizeof(W1[0]), compare);

	for (int i = 0; i < n; i++)
		printf("%s\n", W1[i].arr);
	free(W1);
	return 0;
}