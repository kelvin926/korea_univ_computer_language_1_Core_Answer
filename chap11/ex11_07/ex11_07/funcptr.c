#include <stdio.h>
 
typedef struct point
{
    int x, y; 
} POINT;

void print_point(const POINT *pt)  // 구조체를 매개변수로 갖는 함수
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

    // pf가 get_gcd를 가리키므로 get_gcd를 호출한다.
    if (pf) // pf는 포인터이므로 널 포인터인지 검사하는 것이 안전하다.
        printf("GCD = %d\n", pf(10, 20));  

    pf = add;
    // pf가 이제 add를 가리키므로 add를 호출한다.
    printf("10 + 20 = %d\n", (*pf)(10, 20));

    // pprint가 가리키는 print_point를 호출한다.
    pprint(&pt);

    return 0;
}