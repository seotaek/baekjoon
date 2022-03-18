#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct {
	int x;
	int y;
}location;

int compare(const void* a, const void* b) {
	location* s1 = (location*)a;
	location* s2 = (location*)b;

	if (s1->y < s2->y)
		return -1;
	else if (s1->y > s2->y)
		return 1;
	else {
		if (s1->x < s2->x)
			return -1;
		else
			return 1;
	}
	return 0;
}

int main() {
	location* L1;
	int n;
	scanf("%d", &n);
	L1 = (location*)malloc(sizeof(location) * n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &L1[i].x, &L1[i].y);
	qsort(L1, n, sizeof(L1[0]), compare);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", L1[i].x, L1[i].y);

	free(L1);
	return 0;
}