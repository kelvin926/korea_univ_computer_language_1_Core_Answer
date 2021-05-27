#include <stdio.h>

void test1(int x)   // 매개변수 x는 함수가 호출될 때 main의 x로 초기화된 변수이다.
{
    x = 20;         // x는 test1의 지역 변수이므로 test1이 리턴할 때 소멸된다.
}

void test2(int *p)  // p는 main의 x의 주소로 초기화된 포인터이다.
{
    *p = 20;        // p가 가리키는 변수, 즉 main의 x에 20을 대입한다.
}

int main(void)
{
    int x = 10;
    test1(x);    // main의 x를 함수의 매개변수 x로 복사해서 전달한다.
    printf("test1 호출 후 x = %d\n", x);  // x의 값은 변경되지 않는다.

    test2(&x);    // test2 함수를 호출할 때 x의 주소를 넘겨준다.
    printf("test2 호출 후 x = %d\n", x);  // x의 값이 변경된다.

    return 0;
}
