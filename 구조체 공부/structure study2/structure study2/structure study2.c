﻿#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>    

typedef struct _Person{
	char name[20];
	int age;
	char address[100];
} Person;

int main()
{
	Person p1;
	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	printf("이름:%s\n", p1.name);
	printf("나이:%d\n", p1.age);
	printf("주소:%s\n", p1.address);

	return 0;
}