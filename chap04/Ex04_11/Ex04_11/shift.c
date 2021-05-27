#include <stdio.h>

int main(void)
{
    int x = 0x00000012;
    int y = x << 4;
    int z = x >> 4;

    printf("x = %#08x, %d\n", x, x);    // 0x00000012, 18 
    printf("y = %#08x, %d\n", y, y);    // 0x00000120, 288 (18 * 16)
    printf("z = %#08x, %d\n", z, z);    // 0x00000001, 1 (18 / 16)

    return 0;
}