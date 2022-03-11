#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int flag;
	for (int i = m; i <= n; i++) {
		flag = 0;
		if (i == 1)
			continue;
			
		
		for (int j = 2; j < i; j++) {
				if (i % j == 0)
					flag = 1;
			}
			if (flag == 0)
				printf("%d\n", i);
		
	}
	return 0;
}//에라토스테네스의 체