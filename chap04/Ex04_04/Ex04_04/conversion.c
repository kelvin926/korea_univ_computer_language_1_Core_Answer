#include <stdio.h>
#define PI 3.141592  // ��ũ�� ��� ����

int main(void)
{
    int radius = 0;
    double area, perimeter;

    printf("������? ");
    scanf("%d", &radius);

    area = PI * radius * radius;    // radius�� double�� �� ��ȯ
    printf("���� ����: %.2f\n", area);

    perimeter = 2 * PI * radius;    // radius�� double�� �� ��ȯ
    printf("���� �ѷ�: %.2f\n", perimeter);

    return 0;
}