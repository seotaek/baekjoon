#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int sum = 0;
	int n = 0;
	while (1) {
		sum += n;
		if (sum+n+1 >= x)
			break;
		n++;
	}
	int a, b;//a는 분자 b는 분모
	int y = x - sum;
	if ((n+1) % 2 == 0) {
		a = 1;
		b = n+1;
		for (int j = 1; j < y; j++) {
			a++;
			b--;
		}
	}
	else {
		a = n+1;
		b = 1;
		for (int j = 1; j < y; j++) {
			a--;
			b++;
		}
	}
	printf("%d/%d\n", a, b);
	return 0;
}