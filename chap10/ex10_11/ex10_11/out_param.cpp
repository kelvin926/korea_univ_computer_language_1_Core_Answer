#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct point
{
    int x, y;   // ���� ��ǥ
} POINT;

void print_point(const POINT *pt);
void set_point(POINT *pt, int x, int y);

int main(void)
{
    POINT arr[5] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    srand((unsigned int)time(NULL));    // ������ �õ带 �����Ѵ�.
    for (i = 0; i < sz; i++)
    {
        int x = rand() % 100;           // 0~99������ ������ ������ �����Ѵ�.
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

// ���� ��ǥ�� ����ϴ� �Լ� (pt�� �Է� �Ű�����)
void print_point(const POINT *pt)    // �����Ϳ� ���� ����
{
    printf("(%d, %d)", pt->x, pt->y);
}

// ���� ��ǥ�� �����ϴ� �Լ� (pt�� ��� �Ű�����)
void set_point(POINT *pt, int x, int y)
{
    pt->x = x;      // pt�� ����Ű�� POINT ������ ��� x�� �����Ѵ�.
    pt->y = y;      // pt�� ����Ű�� POINT ������ ��� y�� �����Ѵ�.
}