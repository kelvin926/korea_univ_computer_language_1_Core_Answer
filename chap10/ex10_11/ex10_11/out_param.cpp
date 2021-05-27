#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct point
{
    int x, y;   // 점의 좌표
} POINT;

void print_point(const POINT *pt);
void set_point(POINT *pt, int x, int y);

int main(void)
{
    POINT arr[5] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    srand((unsigned int)time(NULL));    // 난수의 시드를 지정한다.
    for (i = 0; i < sz; i++)
    {
        int x = rand() % 100;           // 0~99사이의 임의의 정수를 생성한다.
        int y = rand() % 100;
        set_point(&arr[i], x, y);
    }
    for (i = 0; i < sz; i++)
    {
        print_point(&arr[i]);
        printf(" ");
    }
    printf("\n");

    return 0;
}

// 점의 좌표를 출력하는 함수 (pt는 입력 매개변수)
void print_point(const POINT *pt)    // 포인터에 의한 전달
{
    printf("(%d, %d)", pt->x, pt->y);
}

// 점의 좌표를 변경하는 함수 (pt는 출력 매개변수)
void set_point(POINT *pt, int x, int y)
{
    pt->x = x;      // pt가 가리키는 POINT 변수의 멤버 x를 변경한다.
    pt->y = y;      // pt가 가리키는 POINT 변수의 멤버 y를 변경한다.
}