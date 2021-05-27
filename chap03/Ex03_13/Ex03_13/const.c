#include <stdio.h>

int main(void)
{
    int amount = 0, price = 0;
    const double VAT_RATE = 0.1;    // 부가가치세율
    int total_price = 0;            // 합계 금액

    printf("수량? ");
    scanf("%d", &amount);

    printf("단가? ");
    scanf("%d", &price);

    total_price = amount * price * (1 + VAT_RATE);
    printf("합계: %d원\n", total_price);

    //VAT_RATE = 0.15;

    return 0;
}