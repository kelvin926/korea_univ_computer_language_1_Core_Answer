#include <stdio.h>

int main(void)
{
    int i = 0;
    do
        printf("%d ", i++); // �ݺ��� ����
    while (i < 10);         // i�� 10�� �Ǹ� ���� Ż��
    printf("\n");

    return 0;
}
