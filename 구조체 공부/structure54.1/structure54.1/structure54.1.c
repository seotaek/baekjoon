﻿#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

union Box {
	short candy;
	float snack;
	char doll[8];
};

int main() {
	union Box b1;

	printf("%d\n", sizeof(b1));//공용체의 전체 크기는 가장 큰 자료형의 크기

	strcpy(b1.doll, "bear");

	printf("%d\n", b1.candy);
	printf("%f\n", b1.snack);
	printf("%s\n", b1.doll);

	return 0;
}