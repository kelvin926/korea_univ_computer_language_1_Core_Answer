#include <stdio.h>

typedef union color_t {
    unsigned int color;
    unsigned char rgb[4];   // rgb[0]�� red, rgb[1]�� blue, rgb[2]�� green, 
                            // rgb[3]�� not used
} COLOR_T;

int main(void)
{
    COLOR_T c1;

    c1.rgb[0] = 0xFF;   // red
    c1.rgb[1] = 0xab;   // green
    c1.rgb[2] = 0x1F;   // blue
    c1.rgb[3] = 0x0;    // not used

    printf("rgb color = %08X\n", c1.color); // 32��Ʈ �����ͷ� ����Ѵ�.

    return 0;
}