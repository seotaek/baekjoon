#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	int age;
	char name[101];
	int idx;
}information;

int compare(const void* a, const void* b) {
	information* s1 = (information*)a;
	information* s2 = (information*)b;

	if (s1->age > s2->age)
		return 1;
	else if (s1->age < s2->age)
		return -1;
	else {
		if (s1->idx > s2->idx)
			return 1;
		else
			return -1;
	}
		
}

int main() {
	int n;
	scanf("%d", &n);
	information* a1 = calloc(n + 1, sizeof(information));
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &a1[i].age, a1[i].name);
		a1[i].idx = i;
	}
	qsort(a1, n, sizeof(a1[0]), compare);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", a1[i].age, a1[i].name);

	free(a1);
	return 0;
}