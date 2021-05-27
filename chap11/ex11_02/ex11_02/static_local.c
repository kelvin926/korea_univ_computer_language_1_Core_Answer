#include <stdio.h>

void test_static(void)
{
    int local = 0;          // 함수가 호출될 때마다 생성된다.
    static int s_local = 0; // 프로그램 시작 시 생성된다.

    printf("local = %d, ", local++);
    printf("s_local = %d\n", s_local++);
}   // 함수 리턴 시 local을 소멸되지만 s_local을 소멸되지 않는다.

int main(void)
{
    int i = 0;
    for (i = 0; i < 5; i++)
        test_static();      // test_static을 5번 호출한다.

    return 0;
}