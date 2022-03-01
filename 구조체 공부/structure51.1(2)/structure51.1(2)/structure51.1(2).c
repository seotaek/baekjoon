#include <stdio.h>
#include<stddef.h>

struct PacketHeader {
    char flags;    // 1바이트
    int seq;       // 4바이트
};

int main() {
    

    printf("%d\n", offsetof(struct PacketHeader,flags));
    printf("%d\n", offsetof(struct PacketHeader, seq));
   

    return 0;
}