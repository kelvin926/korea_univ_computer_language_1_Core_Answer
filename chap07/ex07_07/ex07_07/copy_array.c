#include <stdio.h>

int main(void)
{
    int x[5] = { 10, 20, 30, 40, 50 };
    int y[5] = { 0 };
    int i;

    //y = x;   // �迭�� �ٸ� �迭�� ������ �� ����. (������ ����)

    for (i = 0; i < 5; i++)
        y[i] = x[i];    // �迭�� ���ҳ��� 1:1�� �����Ѵ�. (�迭�� ����)

    printf("y = ");
    for (i = 0; i < 5; i++)
        printf("%d ", y[i]);
    printf("\n");

    return 0;
}