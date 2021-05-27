#include <stdio.h>

int main(void)
{
    int x, y;

    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &x, &y);

    if (y != 0) 
        printf("%d / %d = %f\n", x, y, (double)x / y);
    else 
        printf("0으로 나눌 수 없습니다.\n");

    return 0;
}