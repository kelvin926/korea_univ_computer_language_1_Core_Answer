#include <stdio.h>

int main(void)
{
    int a, b;
    int result, max;

    printf("2���� ����? ");
    scanf("%d %d", &a, &b);

    printf("%d�� ", a);
    a % 2 != 0 ? printf("Ȧ��") : printf("¦��");
    printf("�Դϴ�\n");

    result = a > 0 ? a : -a;
    printf("a�� ���밪: %d\n", result);

    result = b > 0 ? b : -b;
    printf("b�� ���밪: %d\n", result);

    max = a > b ? a : b;
    printf("a, b �� ū ��: %d\n", max);
    
    return 0;
}