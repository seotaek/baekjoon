#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N;
	int x = 1, cnt = 1;
	scanf("%d", &N);
	while (1) {
		if (N <= x)
			break;
		N -= x;
		x = cnt * 6;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}