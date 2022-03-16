#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	int temp=665;
	int cnt = 0;
	
	while (cnt != n) {
		temp++;
		for (int i = 0; i < 10; i++) {
			if (temp / (int)pow(10, i) % 1000 == 666) {
				cnt++;
				break;
			}
		}
	}
	printf("%d\n", temp);
	return 0;
}