#include <stdio.h>

double get_area(double radius)  // ���� ������ ���ϴ� �Լ�
{
    const double PI = 3.14159265359;
    return PI * radius * radius;
}

int main(void)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("�������� %d�� �� ���� ����: %.2f\n", i, get_area(i));
    }

    return 0;
}