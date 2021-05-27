#include <stdio.h>

void dummy()
{
    int y = 456;  // 함수가 호출될 때마다 매번 다시 생성된다.
    printf("y = %d\n", y);
    y--;          // 감소된 y는 함수가 리턴할 때 소멸된다.
}

int main(void)
{
    int i;
    for (i = 0; i < 3; i++)
        dummy();
    for (i = 0; i < 3; i++) 
    {
        int x = 123;    // for의 각 반복회차가 시작될 때마다 생성된다.
        printf("x = %d\n", x);
        x++;            // 증가된 x는 블록의 끝을 만나면 소멸된다.
    }
    return 0;
}