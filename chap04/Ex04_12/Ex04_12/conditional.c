#include <stdio.h>

int main(void)
{
    int a, b;
    int result, max;

    printf("2개의 정수? ");
    scanf("%d %d", &a, &b);

    printf("%d는 ", a);
    a % 2 != 0 ? printf("홀수") : printf("짝수");
    printf("입니다\n");

    result = a > 0 ? a : -a;
    printf("a의 절대값: %d\n", result);

    result = b > 0 ? b : -b;
    printf("b의 절대값: %d\n", result);

    max = a > b ? a : b;
    printf("a, b 중 큰 값: %d\n", max);
    
    return 0;
}