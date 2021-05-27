#include <stdio.h>

#define ABS(x) (((x) > 0)? (x) : (-(x)))   // 매개변수를 ( )로 묶어 주어야 한다.
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y))? (x) : (y))
// 여러 줄로 된 매크로의 정의
#define PRINT_POINT(pt_name, pt) { \
    printf(pt_name " = "); \
    printf("(%d, %d)\n", pt.x, pt.y); \
} 
// 배열 크기를 구하는 매크로
#define ARR_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

typedef struct point {
    int  x, y;
} POINT;

int main(void)
{
    POINT pt1 = { 100, 200 };
    POINT pt2 = { 5, 3 };
    int data[] = { 1, 2, 3, 4, 5, 6 };
    int i;

    printf("ABS(-5) = %d\n", ABS(-5));
    printf("MAX(10, 20) = %d\n", MAX(10, 20));
    printf("MIN(10, 20) = %d\n", MIN(10, 20));
    PRINT_POINT("pt1", pt1);   // 출력할 점의 이름과 점의 좌표를 인자로 지정한다.
    PRINT_POINT("pt2", pt2);

    for (i = 0; i < ARR_SIZE(data); i++)  // sizeof(data) / sizeof(data[0])
        printf("%d ", data[i]);
    printf("\n");

    return 0;
}