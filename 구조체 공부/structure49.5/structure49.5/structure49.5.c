#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    int grade;
    int class;
    float average;
};

int main() {
    struct Student* p1 = malloc(sizeof(struct Student));
    strcpy(p1->name, "고길동");
    p1->grade = 1;
    p1->class = 3;
    p1->average = 65.389999;

    printf("이름: %s\n", p1->name);
    printf("학년: %d\n", p1->grade);
    printf("반: %d\n", p1->class);
    printf("평균점수: %f\n", p1->average);

    free(p1);

    return 0;
}