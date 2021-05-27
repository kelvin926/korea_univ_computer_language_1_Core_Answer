#include <stdio.h>
 
typedef struct point
{
    int x, y; 
} POINT;

void print_point(const POINT *pt)  // ����ü�� �Ű������� ���� �Լ�
{
    printf("(%d, %d)", pt->x, pt->y);
}

int get_gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    return get_gcd(y, x % y);
}

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int(*pf)(int, int) = &get_gcd;
    void(*pprint)(const POINT*) = print_point;
    POINT pt = { 10, 20 };

    // pf�� get_gcd�� ����Ű�Ƿ� get_gcd�� ȣ���Ѵ�.
    if (pf) // pf�� �������̹Ƿ� �� ���������� �˻��ϴ� ���� �����ϴ�.
        printf("GCD = %d\n", pf(10, 20));  

    pf = add;
    // pf�� ���� add�� ����Ű�Ƿ� add�� ȣ���Ѵ�.
    printf("10 + 20 = %d\n", (*pf)(10, 20));

    // pprint�� ����Ű�� print_point�� ȣ���Ѵ�.
    pprint(&pt);

    return 0;
}