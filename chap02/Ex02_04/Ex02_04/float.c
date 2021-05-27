#include <stdio.h>

int main()
{
    float x;

    x = 12.34567;           // x에 값 저장

    printf("%f\n", x);      // 폭과 정밀도를 지정하지 않는 경우
    printf("%.2f\n", x);    // 정밀도를 지정하는 경우 (소수점 이하 2자리)
    printf("%8.2f\n", x);   // 폭과 정밀도를 지정하는 경우

    return 0;
}