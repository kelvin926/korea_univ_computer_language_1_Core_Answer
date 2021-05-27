// ����ü, typedef, ��ũ�� ���Ǵ� ��� ���Ͽ� �־��ش�.
typedef struct point {
    int x, y; 
} POINT;

// �Լ� ������ ��� ���Ͽ� �־��ش�.
void print_point(const POINT *pt);
void set_point(POINT *pt, int x, int y);
int is_equal_point(const POINT *lhs, const POINT *rhs);
double get_length(const POINT *start, const POINT *end);

#define PRT_POINT(pt) { printf(#pt " = "); print_point(&pt); printf("\n"); }