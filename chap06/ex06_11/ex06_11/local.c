#include <stdio.h>

void test_local(void);

int main(void)
{
    int num = 0;    // main의 num 선언

    printf("main: num = %d\n", num);    // main의 num 사용
    test_local();

    return 0;   
}

void test_local(void)
{
    int num = 100;  // test_local의 num 선언(서로 다른 함수에는 같은 이름의 변수를 선언할 수 있다.)

    num++;                                  // test_local의 num 사용
    printf("test_local: num = %d\n", num);  // test_local의 num 사용
}