#include <stdio.h>

void test(void);    // 함수 선언
double x = 0.01;    // 전역 변수 x

int main(void)
{
    double x = 0.5; // main의 지역 변수 x

    while (1) {
        double x = 1.23;    // while 블록의 지역 변수 x
        printf("in while block: x = %f\n", x);  // x는 1.23
        if (x > 1)          // x는 1.23
            break;
    }
    printf("in main block: x = %f\n", x); // x는 0.5
    test();
    return 0;
}

void test(void)
{
    x *= 10;        // 전역 변수 x
    printf("in test block: x = %f\n", x); 
}