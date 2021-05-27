#include <stdio.h>
#include <math.h>

#include "point.h"

// 전역 변수의 정의(메모리 할당 및 초기화)는 한번만 한다.
POINT origin = { 0,0 };   

void print_point(const POINT *pt)
{
    printf("(%d, %d)", pt->x, pt->y);
}

void set_point(POINT *pt, int x, int y)
{
    pt->x = x;
    pt->y = y;
}

int is_equal_point(const POINT *lhs, const POINT *rhs)
{
    return (lhs->x == rhs->x && lhs->y == rhs->y);
}

double get_length(const POINT *start, const POINT *end)
{
    int dx = end->x - start->x;
    int dy = end->y - start->y;
    return sqrt(dx*dx + dy * dy);
}