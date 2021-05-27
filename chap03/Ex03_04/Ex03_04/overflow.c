#include <stdio.h>

int main(void)
{
    char n = 128;           // n에 유효 범위 밖의 값을 저장한다.
    unsigned char m = 256;  // m에 유효 범위 밖의 값을 저장한다.
    char x = -129;          // x에 유효 범위 밖의 값을 저장한다.
    unsigned char y = -1;   // y에 유효 범위 밖의 값을 저장한다.

    printf("n = %d\n", n);
    printf("m = %d\n", m);
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}