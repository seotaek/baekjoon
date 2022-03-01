#include <stdio.h>

struct person {    // 구조체 정의
    char name[20];        // 구조체 멤버 1
    int age;              // 구조체 멤버 2
    char address[100];    // 구조체 멤버
};
int main() {
    struct person p1;
    struct person* ptr;

    ptr = &p1;

    ptr->age = 30;
    printf("나이:%d\n", p1.age);
    printf("나이:%d\n", ptr->age);

    return 0;
}