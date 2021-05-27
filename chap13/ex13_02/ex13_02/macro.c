#include <stdio.h>

#define ABS(x) (((x) > 0)? (x) : (-(x)))   // �Ű������� ( )�� ���� �־�� �Ѵ�.
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y))? (x) : (y))
// ���� �ٷ� �� ��ũ���� ����
#define PRINT_POINT(pt_name, pt) { \
    printf(pt_name " = "); \
    printf("(%d, %d)\n", pt.x, pt.y); \
} 
// �迭 ũ�⸦ ���ϴ� ��ũ��
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
    PRINT_POINT("pt1", pt1);   // ����� ���� �̸��� ���� ��ǥ�� ���ڷ� �����Ѵ�.
    PRINT_POINT("pt2", pt2);

    for (i = 0; i < ARR_SIZE(data); i++)  // sizeof(data) / sizeof(data[0])
        printf("%d ", data[i]);
    printf("\n");

    return 0;
}