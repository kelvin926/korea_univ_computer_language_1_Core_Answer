#include <stdio.h>

typedef struct point
{
    int x, y;   // ���� ��ǥ
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
        print_point(&arr[i]);   // ����ü ������ �ּҸ� �����Ѵ�.
        printf(" ");
    }
    printf("\n");

    return 0;
}

// ���� ��ǥ�� ����ϴ� �Լ� (pt�� �Է� �Ű�����)
void print_point(const POINT *pt)    // �����Ϳ� ���� ����(�������� �ʰ� ����)
{
    printf("(%d, %d)", pt->x, pt->y);
}