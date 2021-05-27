#include <stdio.h>

double get_area(double radius)  // 원의 면적을 구하는 함수
{
    const double PI = 3.14159265359;
    return PI * radius * radius;
}

int main(void)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("반지름이 %d일 때 원의 면적: %.2f\n", i, get_area(i));
    }

    return 0;
}