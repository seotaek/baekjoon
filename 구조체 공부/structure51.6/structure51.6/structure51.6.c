#include <stdio.h>

struct EncryptionHeader {
    char flags;
    int x;
    int y;
       
};

int main()
{
    struct EncryptionHeader header;

    printf("%d\n", sizeof(header));

    return 0;
}