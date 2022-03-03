#include<stdio.h>

struct Flags {
    union {
        struct {
            unsigned int a : 4;
            unsigned int b : 2;
            unsigned int c : 2;
            unsigned int d : 8;
        };
        unsigned short e;
    };
};

int main()
{
    struct Flags f1 = { 0, };

    f1.a = 8;
    f1.b = 2;
    f1.c = 2;
    f1.d = 128;

    printf("%u\n", f1.e);

    return 0;
}