#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i > 0; i--)
    {
        if (i % 3 == 0)    
            continue;	// 루프의 시작 부분으로 이동한다.
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}