#include <stdio.h>
#include <math.h>

typedef struct point
{
    int x, y;           // ���� ��ǥ
} POINT;

typedef struct line
{
    POINT start, end;   // ����� �ٸ� ����ü�� ������ �����Ѵ�.
} LINE;

double get_length(const LINE *ln);

int main(void)
{
    LINE ln1 = { {10,20}, {30,40} };

    printf("������ ������: (%d, %d)\n", ln1.start.x, ln1.start.y);
    printf("������ ����: (%d, %d)\n", ln1.end.x, ln1.end.y);

    printf("������ ����: %f\n", get_length(&ln1));
    return 0; 
}

double get_length(const LINE *ln)  // ������ ���� ���ϴ� �Լ�
{
    int dx = ln->end.x - ln->start.x;
    int dy = ln->end.y - ln->start.y;
    return sqrt(dx*dx + dy * dy);
}