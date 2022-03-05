#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, x, y;
	scanf("%d", &n);
	int cnt = 0;
	while (1) {
		if (n % 5 == 0) {
			cnt += n / 5;
			printf("%d\n", cnt);
			break;
		}
		n = n - 3;
		cnt++;
		if (n < 0) {
			printf("-1");
			break;
		}
			
		  
	}

	return 0;
}