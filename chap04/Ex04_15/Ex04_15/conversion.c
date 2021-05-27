#include <stdio.h>

int main(void)
{
    int a, b, c;
    double average;

    printf("정수 3개? ");
    scanf("%d %d %d", &a, &b, &c);

    average = (double)(a + b + c) / 3;   // 명시적인 형 변환 필요   
    printf("평균: %f\n", average);

    return 0;
}