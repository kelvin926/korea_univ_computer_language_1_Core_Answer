#include <stdio.h>

void hi(void)   // 리턴형과 매개변수가 없는 함수
{
    printf("Hi! Let's enjoy C prgramming.\n");
}               // 함수의 끝을 만나면 리턴한다.

void bye() { printf("Bye!\n"); }  // 간단한 함수는 한 줄로 작성할 수 있다.

int main(void)
{
    hi();
    bye();

    hi();       // 같은 함수를 여러 번 호출할 수 있다.
    bye();

    return 0;
}