#ifndef POINT_H
#define POINT_H  // point.h의 포함 여부를 나타내는 매크로

typedef struct point {
    int x, y; 
} POINT;

void print_point(const POINT *pt);
void set_point(POINT *pt, int x, int y);
int is_equal_point(const POINT *lhs, const POINT *rhs);
double get_length(const POINT *start, const POINT *end);

#define PRT_POINT(pt) { printf(#pt " = "); print_point(&pt); printf("\n"); }

extern POINT origin;

#endif