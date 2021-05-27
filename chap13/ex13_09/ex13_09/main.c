#include <stdio.h>

#include "point.h"  // POINT 구조체와 관련 함수를 사용하려면 헤더 파일을 포함한다.

int main(void)
{
    POINT pt1 = { 0 };
    POINT pt2 = { 0 };

    set_point(&pt2, 30, 40);
    PRT_POINT(pt1);
    PRT_POINT(pt2);
    printf("길이 = %.2f\n", get_length(&pt1, &pt2));

    return 0;
}