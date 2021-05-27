// 구조체, typedef, 매크로 정의는 헤더 파일에 넣어준다.
typedef struct point {
    int x, y; 
} POINT;

// 함수 선언은 헤더 파일에 넣어준다.
void print_point(const POINT *pt);
void set_point(POINT *pt, int x, int y);
int is_equal_point(const POINT *lhs, const POINT *rhs);
double get_length(const POINT *start, const POINT *end);

#define PRT_POINT(pt) { printf(#pt " = "); print_point(&pt); printf("\n"); }