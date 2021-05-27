#include <stdio.h>

int main()
{
    int num;    // 정수형 변수 선언
    float x;    // 실수형 변수 선언
    char ch;    // 문자형 변수 선언

    num = 123;  // 정수형 변수에 값 대입
    x = 1.23;   // 실수형 변수에 값 대입
    ch = 'A';   // 문자형 변수에 값 대입

    printf("%d %x\n", num, num);    // 10진수, 16진수 출력
    printf("%f %e\n", x, x);        // 부동소수점, 지수 출력
    printf("%c\n", ch);             // 문자 출력

    printf("%x\n", num);    // 7b 출력
    printf("%X\n", num);    // 7B 출력
    printf("%#x\n", num);   // 0x7b 출력
    printf("%#X\n", num);   // 0X7B 출력

    return 0;
}