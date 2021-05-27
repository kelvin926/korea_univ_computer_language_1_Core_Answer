#include <stdio.h>

int main(void)
{
    double x = 0, y = 0;

    printf("두 개의 실수를 입력하세요 : ");
    scanf("%lf %lf", &x, &y);

    printf("+%f = %f\n", x, +x);
    printf("-%f = %f\n", y, -y);
    printf("%f + %f = %f\n", x, y, x + y);
    printf("%f - %f = %f\n", x, y, x - y);
    printf("%f * %f = %f\n", x, y, x * y);
    printf("%f / %f = %f\n", x, y, x / y);
    //printf("%f %% %f = %f\n", x, y, x % y);   // 컴파일 에러

    return 0;
}