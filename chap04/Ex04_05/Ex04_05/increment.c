#include <stdio.h>

int main(void)
{
    int index1 = 0, index2 = 0;
    int current1, current2;
    float x1 = 0.5F, x2 = 0.5F;
    float y1, y2;
    
    current1 = index1++;    // 증가 전의 index1
    printf("index1 = %d, current1 = %d\n", index1, current1);

    current2 = ++index2;    // 증가 후의 index2
    printf("index2 = %d, current2 = %d\n", index2, current2);

    y1 = x1++;    // 증가 전의 x1
    printf("x1 = %.2f, y1 = %.2f\n", x1, y1);

    y2 = ++x2;    // 증가 후의 x2
    printf("x2 = %.2f, y2 = %.2f\n", x2, y2);

    return 0;
}