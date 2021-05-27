#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i > 0; i--)
    {
        if (i % 3 == 0)
            goto quit;  // quit 레이블이 지정하는 문장으로 이동한다.
        printf("%d ", i);
    }
quit:
    printf("\n");

    return 0;
}