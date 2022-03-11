#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int x;
	int count = 0;
	int flag;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		flag = 0;
		if (x == 1) {
			continue;
		}
		for (int j = 2; j < x; j++) {
			if (x % j == 0) 
				flag=1;

			}
		if (flag == 0)
			count++;
		
		
	}
	printf("%d\n", count);
	return 0;
}