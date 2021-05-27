#include <stdio.h>

int main(void)
{
    short a = -10;
    unsigned short b = 65526;

    printf("a = %d, %08x\n", a, a);
    printf("b = %u, %08x\n", b, b);

    return 0;
}