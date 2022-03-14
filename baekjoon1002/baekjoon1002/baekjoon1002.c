#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	int x1, y1, r1, x2, y2, r2;
	double d = 0;
	int x;
	

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		int a = r1 + r2;
		int b = r1 - r2;
		int c = x1 - x2;
		int d = y1 - y2;
		d = sqrt(pow(c, 2) + pow(d, 2));
		if (a == d)
			x=1;
		else if (a < d) 
			x=0;

		else if (abs(b) == d)
				x=1;
		else if ((r1 == r2) && d == 0)
				x=-1;
		else if (abs(b) > d)
				x=0;
		else
			x=2;
		printf("%d\n", x);
	}
	return 0;
}

