#include <stdio.h>

typedef struct point
{
    int x, y;   // 점의 좌표
} POINT;

void print_point(const POINT *pt);

int main(void)
{
    POINT arr[] = {
        {0,0}, {10,10}, {20,20}, {30, 30}, {40,40},
    };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++)
    {
        print_point(&arr[i]);   // 구조체 변수의 주소를 전달한다.
        printf(" ");
    }
    printf("\n");

    return 0;
}

// 점의 좌표를 출력하는 함수 (pt는 입력 매개변수)
void print_point(const POINT *pt)    // 포인터에 의한 전달(복사하지 않고 전달)
{
    printf("(%d, %d)", pt->x, pt->y);
}