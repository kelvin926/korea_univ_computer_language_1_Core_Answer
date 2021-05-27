#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;

    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d %d", &x, &y);

    printf("+%d = %d\n", x, +x);            // 플러스 부호
    printf("-%d = %d\n", y, -y);            // 마이너스 부호
    printf("%d + %d = %d\n", x, y, x + y);  // 더하기
    printf("%d - %d = %d\n", x, y, x - y);  // 빼기
    printf("%d * %d = %d\n", x, y, x * y);  // 곱하기
    printf("%d / %d = %d\n", x, y, x / y);  // 나누기
    printf("%d %% %d = %d\n", x, y, x % y); // 나머지

    return 0;
}