#include <stdio.h>

void draw_line(char ch, int len);
double get_area(double radius);

int main(void)
{
    int i;

    draw_line('-', 40);
    for (i = 5; i <= 20; i+=5) 
    {
        printf("�������� %d�� �� ���� ����: %.2f\n", i, get_area(i));
    }
    draw_line('-', 40);

    return 0;
}

double get_area(double radius)      // ���� ������ ���ϴ� �Լ�
{
    const double PI = 3.14159265359;
    return PI * radius * radius;
}

void draw_line(char ch, int len)    // ch�� len�� ����ؼ� ���� �׸��� �Լ�
{
    int i;
    for (i = 0; i < len; i++)
        printf("%c", ch);
    printf("\n");
}