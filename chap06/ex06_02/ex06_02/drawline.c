#include <stdio.h>

// ch : �� �׸� �� ����� ����
// len : ���� ����� �� �ʿ��� ������ ����
void draw_line(char ch, int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%c", ch);
    printf("\n");
}

int main(void)
{
    int amount = 10;
    int price = 1000;
    int total = amount * price;
    int width;          // ��꼭 ��� ��

    draw_line('-', 30); // '-'�� 30�� ���̸�ŭ ���� �׸���.

    printf("����    �ܰ�     �հ�\n");
    width = 3 + 8 + 8 + 2;  // ��� ���� ����Ѵ�. (%3d+%8d+%8d+��ĭ2��)
    draw_line('*', width);  // '*'�� width�� ���̸�ŭ ���� �׸���.
    printf("%3d %8d %8d\n", amount, price, total);

    draw_line('-', 30);     // '-'�� 30�� ���̸�ŭ ���� �׸���.

    return 0;
}