#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

int main()
{
    struct Person* p1 = malloc(sizeof(struct Person));
    void* ptr;

    strcpy(p1->name, "고길동");
    p1->age = 40;

    ptr = p1;

    printf("%s %d\n", ((struct Person*)ptr)->name, ((struct Person*)ptr)->age);

    free(p1);

    return 0;
}