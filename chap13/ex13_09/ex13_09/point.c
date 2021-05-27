#include <stdio.h>
#include <math.h>

#include "point.h"      // "point.h"를 포함하지 않으면 컴파일 에러

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