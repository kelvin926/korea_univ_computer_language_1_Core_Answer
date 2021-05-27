#include <stdio.h>

int main(void)
{
    int a = 0;
    double b = 0;
    int c = 0;

    a = 123;                            // a에 123 저장
    printf("a = %d\n", a);
    printf("a = %d\n", a = 456);        // a에 456 저장 후 a의 값이 수식의 값
    printf("b = %f\n", b = a + 0.5);    // b에 a + 0.5 저장 후 b의 값이 수식의 값
    printf("c = %d\n", c = printf("ABC\n"));    
        // printf 함수의 리턴 값(출력한 글자 수)을 c에 저장하고 c의 값이 수식의 값

    return 0;
}