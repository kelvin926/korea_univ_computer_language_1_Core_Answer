#include <stdio.h>

#include "point.h"  // POINT ����ü�� ���� �Լ��� ����Ϸ��� ��� ������ �����Ѵ�.

int main(void)
{
    POINT pt1 = { 0 };
    POINT pt2 = { 0 };

    set_point(&pt2, 30, 40);
    PRT_POINT(pt1);
    PRT_POINT(pt2);
    printf("���� = %.2f\n", get_length(&pt1, &pt2));

    return 0;
}