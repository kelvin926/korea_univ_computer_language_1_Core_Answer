#include <stdio.h>

int main(void)
{
    int a, b, c;
    double average;

    printf("���� 3��? ");
    scanf("%d %d %d", &a, &b, &c);

    average = (double)(a + b + c) / 3;   // ������� �� ��ȯ �ʿ�   
    printf("���: %f\n", average);

    return 0;
}