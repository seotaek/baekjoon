#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main()
{
    struct Person* p[5];
    for (int i = 0; i < 5; i++) {
        p[i] = malloc(sizeof(struct Person));
       
    }


    for (int i = 0; i < 5; i++) 
        scanf("%s %d", p[i]->name, &p[i]->age);

    int oldest = 0;
    int age = 0;

    for (int i = 0; i < 5; i++) {
        if (p[i]->age > age) {
            age = p[i]->age;
            oldest = i;
        }
    }

    printf("%s", p[oldest]->name);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        free(p[i]);
    }

    return 0;
}