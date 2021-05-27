#include <stdio.h>

int main(void)
{

    unsigned short x = 0x12;
    unsigned short y = 0xF0;

    printf("%08x & %08x = %08x\n", x, y, x & y);    // 비트 AND
    printf("%08x | %08x = %08x\n", x, y, x | y);    // 비트 OR
    printf("%08x ^ %08x = %08x\n", x, y, x ^ y);    // 비트 XOR
    printf("~%08x = %08x\n", x, ~x);                // 비트 NOT

    return 0;
}