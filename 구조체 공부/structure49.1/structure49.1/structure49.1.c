﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct person {
	char name[20];
	int age;
	char address[100];
};

int main() {
	struct person *p1 = malloc(sizeof(struct person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구 한남동");

	printf("이름: %s\n", p1->name);       
	printf("나이: %d\n", p1->age);        
	printf("주소: %s\n", p1->address);

	free(p1);
	return 0;
}