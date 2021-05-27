#include <stdio.h>
#define PI 3.141592  // 매크로 상수 정의

int main(void)
{
    int radius = 0;
    double area, perimeter;

    printf("반지름? ");
    scanf("%d", &radius);

    area = PI * radius * radius;    // radius를 double로 형 변환
    printf("원의 면적: %.2f\n", area);

    perimeter = 2 * PI * radius;    // radius를 double로 형 변환
    printf("원의 둘레: %.2f\n", perimeter);

    return 0;
}