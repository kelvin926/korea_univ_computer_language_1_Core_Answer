#include <stdio.h>

int main(void)
{
    int amount = 0, price = 0;
    const double VAT_RATE = 0.1;    // �ΰ���ġ����
    int total_price = 0;            // �հ� �ݾ�

    printf("����? ");
    scanf("%d", &amount);

    printf("�ܰ�? ");
    scanf("%d", &price);

    total_price = amount * price * (1 + VAT_RATE);
    printf("�հ�: %d��\n", total_price);

    //VAT_RATE = 0.15;

    return 0;
}