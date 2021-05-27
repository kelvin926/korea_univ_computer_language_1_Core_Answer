#include <stdio.h>

int main(void)
{

    unsigned short x = 0x12;
    unsigned short y = 0xF0;

    printf("%08x & %08x = %08x\n", x, y, x & y);    // ��Ʈ AND
    printf("%08x | %08x = %08x\n", x, y, x | y);    // ��Ʈ OR
    printf("%08x ^ %08x = %08x\n", x, y, x ^ y);    // ��Ʈ XOR
    printf("~%08x = %08x\n", x, ~x);                // ��Ʈ NOT

    return 0;
}