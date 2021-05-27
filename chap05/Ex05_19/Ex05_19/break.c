#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i > 0; i--)
    {
        if (i % 3 == 0)     // 루프 탈출 조건
            break;
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}