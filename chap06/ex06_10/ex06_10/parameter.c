#include <stdio.h>
// num을 2배로 만드는 함수(double은 키워드이므로 함수명으로 사용할 수 없다.)
void double_it(int num) 
{
    num *= 2;       // 매개변수 num은 함수가 리턴할 때 소멸된다.
}
// num을 2배로 만들어서 리턴하는 함수
int double_this(int num)
{
    return num * 2; // 2배로 만든 값을 리턴하므로 함수를 호출한 곳으로 전달된다.
}

int main(void)
{
    int x = 5;

    double_it(x);       // x는 변경되지 않는다.
    printf("double_it 호출 후 : x = %d\n", x);

    x = double_this(x); // 함수의 리턴 값을 받아와서 x에 저장한다.
    printf("double_this 호출 후 : x = %d\n", x);

    return 0;
}