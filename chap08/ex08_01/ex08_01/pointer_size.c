#include <stdio.h>

int main(void)
{
    int *pi;        // *�� ������ ������ �ٿ��ش�.
    double *pd;
    char *pc;

    printf("sizeof(pi) = %d\n", sizeof(pi));   // 4����Ʈ (32��Ʈ �÷��� ����)
    printf("sizeof(pd) = %d\n", sizeof(pd));   // 4����Ʈ
    printf("sizeof(pc) = %d\n", sizeof(pc));   // 4����Ʈ

    printf("sizeof(int*) = %d\n", sizeof(int*));       // 4����Ʈ
    printf("sizeof(double*) = %d\n", sizeof(double*)); // 4����Ʈ
    printf("sizeof(char*) = %d\n", sizeof(char*));     // 4����Ʈ

    return 0;
}