typedef struct point {
    int x, y; 
} POINT;

void print_point(const POINT *pt);
void set_point(POINT *pt, int x, int y);
int is_equal_point(const POINT *lhs, const POINT *rhs);
double get_length(const POINT *start, const POINT *end);

#define PRT_POINT(pt) { printf(#pt " = "); \
    print_point(&pt); printf("\n"); }

// 전역 변수의 extern 선언은 헤더 파일에 넣어준다.
extern POINT origin;    // extern 선언은 메모리를 할당하지 않는다.