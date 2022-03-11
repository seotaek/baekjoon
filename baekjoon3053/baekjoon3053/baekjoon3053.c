#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

int main() {
	int r;
	
	scanf("%d", &r);
	double x = (double)r * r * M_PI;
	printf("%lf\n", x);
	double y = (double)r * r * 2;
	printf("%lf\n", y);
	return 0;
}