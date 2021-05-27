#include <stdio.h>
void get_sum_product(int x, int y, int *sum, int *product);

int main(void)
{
    int result1, result2;

    // 2. 함수를 호출할 때 처리 결과를 받아올 변수의 주소를 전달한다
    get_sum_product(10, 20, &result1, &result2);
    printf("sum = %d, product = %d\n", result1, result2);
    return 0;
}

// 1. 처리 결과를 저장할 변수를 가리키는 포인터형으로 매개변수를 선언한다.
void get_sum_product(int x, int y, int *sum, int *product)
{
    // 3. 포인터형의 매개변수가 가리키는 곳에 처리 결과를 저장한다.
    *sum = x + y;
    *product = x * y;
}