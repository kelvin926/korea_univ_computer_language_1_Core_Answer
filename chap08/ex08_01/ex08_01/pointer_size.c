#include <stdio.h>

int main(void)
{
    int *pi;        // *는 변수명 쪽으로 붙여준다.
    double *pd;
    char *pc;

    printf("sizeof(pi) = %d\n", sizeof(pi));   // 4바이트 (32비트 플랫폼 기준)
    printf("sizeof(pd) = %d\n", sizeof(pd));   // 4바이트
    printf("sizeof(pc) = %d\n", sizeof(pc));   // 4바이트

    printf("sizeof(int*) = %d\n", sizeof(int*));       // 4바이트
    printf("sizeof(double*) = %d\n", sizeof(double*)); // 4바이트
    printf("sizeof(char*) = %d\n", sizeof(char*));     // 4바이트

    return 0;
}