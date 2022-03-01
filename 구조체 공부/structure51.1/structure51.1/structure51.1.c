#include <stdio.h>

struct PacketHeader {
    char flags;    // 1바이트
    int seq;       // 4바이트
};

int main() {
    struct PacketHeader p1;

    printf("%d\n", sizeof(p1.flags));
    printf("%d\n", sizeof(p1. seq));
    printf("%d\n", sizeof(p1));
    printf("%d\n", sizeof(struct PacketHeader));

    return 0;
}