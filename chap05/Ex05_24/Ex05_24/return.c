#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i > 0; i--)
    {
        if (i % 3 == 0)
            return 1;    // main �Լ��� ���Ͻ�Ų��. (���α׷� ����)
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}