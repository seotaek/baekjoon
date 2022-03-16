#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	char s1[51][51];

	for (int i = 0; i < n; i++) {
		scanf("%s", &s1[i]);
		
	}


	int count = 0;
	int min = 64;
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			for (int k = i; k < i + 8; k++) {
				if (k % 2 == 0) {
					for (int t = j; t < j + 8; t++) {
						if (t % 2 == 0 && s1[k][t] != 'B')
							count++;
						else if (t % 2 != 0 && s1[k][t] != 'W')
							count++;
					}
				}
				else if(k%2!=0) {
					for (int t = j; t < j + 8; t++) {
						if (t % 2 == 0 && s1[k][t] != 'W')
							count++;
						else if (t % 2 != 0 && s1[k][t] != 'B')
							count++;
					}
				}

			}
			if (count > 32)
				count = 64 - count;
			if (min > count)
				min = count;
			count = 0;
		}
	}
	printf("%d\n", min);


	return 0;
}