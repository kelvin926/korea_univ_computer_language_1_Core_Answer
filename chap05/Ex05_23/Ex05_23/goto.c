#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i > 0; i--)
    {
        if (i % 3 == 0)
            goto quit;  // quit ���̺��� �����ϴ� �������� �̵��Ѵ�.
        printf("%d ", i);
    }
quit:
    printf("\n");

    return 0;
}