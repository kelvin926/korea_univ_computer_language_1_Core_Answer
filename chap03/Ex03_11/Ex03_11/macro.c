#include <stdio.h>
#define PI 3.14             // ��ũ�� ��� ����

int main(void)
{
    double radius = 0;
    double area = 0;
    
    printf("������? ");
    scanf("%lf", &radius);  // double�� �Է�
    area = PI * radius * radius;
    printf("���� ����: %.2f\n", area);
    printf("PI = %.2f\n", PI);

    return 0;
}