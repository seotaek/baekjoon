#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct {
	int x;
	int y;
}location;

int compare(const void* x, const void* y) {
	location* a = (location*)x;
	location* b = (location*)y;

	if (a->x < b->x)
		return -1;
	else if (a->x > b->x)
		return 1;
	else {
		if (a->y < b->y)
			return -1;
		else
			return 1;
	}
	return 0;
}
int main() {
	int n;
	scanf("%d", &n);
	location* L1;
	L1 = (location*)malloc(sizeof(location) * n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &L1[i].x, &L1[i].y);

	qsort(L1, n, sizeof(L1[0]), compare);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", L1[i].x, L1[i].y);

	free(L1);
	return 0;
}