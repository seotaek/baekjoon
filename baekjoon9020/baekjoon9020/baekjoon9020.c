#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int x, y;
	int a;
	for (int i = 0; i < t; i++) {
		int* s1 = malloc(sizeof(int) * 10000);
		for (int j = 0; j < 10000; j++)
			s1[j] = 0;
		s1[0] = 1;
		s1[1] = 1;
		for (int j = 2; j < 10000; j++) {
			for (int k = 2; j * k < 10000; k++)
				s1[j * k] = 1;
		}
		scanf("%d", &a);
		
			for (int j = a/2; j >0; j--) {
				if(s1[j]==0&&s1[a-j]==0){
					printf("%d %d\n", j, a - j);
					break;
				}
			}
		
		free(s1);
	}
	return 0;
}