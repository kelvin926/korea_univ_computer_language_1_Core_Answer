#include <stdio.h>

void test_global(void); // 다른 소스 파일의 함수를 호출하려면 함수 선언 필요

extern int global;      // 'global이라는 변수가 있다.'라고 알려준다.

int main(void)
{
    test_global();
    printf("global = %d\n", global);

    return 0;
}