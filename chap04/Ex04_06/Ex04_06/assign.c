#include <stdio.h>

int main(void)
{
    int a = 0;
    double b = 0;
    int c = 0;

    a = 123;                            // a�� 123 ����
    printf("a = %d\n", a);
    printf("a = %d\n", a = 456);        // a�� 456 ���� �� a�� ���� ������ ��
    printf("b = %f\n", b = a + 0.5);    // b�� a + 0.5 ���� �� b�� ���� ������ ��
    printf("c = %d\n", c = printf("ABC\n"));    
        // printf �Լ��� ���� ��(����� ���� ��)�� c�� �����ϰ� c�� ���� ������ ��

    return 0;
}