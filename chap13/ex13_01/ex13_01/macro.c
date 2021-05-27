#include <stdio.h>

#define SQUARE(x) ((x) * (x))   // 함수 매크로의 정의

int square(int x)               // 일반 함수의 정의
{ 
    return x * x; 
}

int main(void)
{
    int a = 5;
    printf("SQUARE(10) = %d\n", SQUARE(10));     // 10 * 10으로 처리
    printf("SQUARE(1.5) = %f\n", SQUARE(1.5));      // 1.5 * 1.5로 처리
    printf("SQUARE(\'a\') = %d\n", SQUARE('a'));    // 'a' * 'a' --> 97 * 97로 처리
    //printf("SQUARE(\"a\") = %d\n", SQUARE("a"));  // "a" * "a"는 컴파일 에러

    printf("square(1 + 2) = %d\n", square(1 + 2));  // square(3)으로 처리
    printf("SQUARE(1 + 2) = %d\n", SQUARE(1 + 2));  // ((1 + 2) * (1 + 2))로 처리

    printf("square(++a) = %d\n", square(++a));      // square(6); 호출
    a = 5;
    printf("SQUARE(++a) = %d\n", SQUARE(++a));      // ((++a) * (++a)로 처리

    printf("square(3.1) = %d\n", square(3.1));      // square(3)으로 처리
    printf("SQUARE(3.1) = %f\n", SQUARE(3.1));      // ((3.1) * (3.1)) 로 처리

    return 0;
}