#include <stdio.h>

int main(void)
{
    int amount;     // 수량 : 초기화하지 않은 경우
    int price = 0;  // 단가 : 정수형 변수는 0으로 초기화
    int total_price = 0;    // 합계 금액 : 정수형 변수는 0으로 초기화

    printf("amount = %d, price = %d\n", amount, price);

    printf("수량? ");
    scanf("%d", &amount);
    price = 2000;

    total_price = amount * price;   // 합계 금액
    printf("합계: %d원\n", total_price);

    return 0;
}