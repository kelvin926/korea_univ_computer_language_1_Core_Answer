#include <stdio.h>

int global = 123;   // 변수의 선언이면서 정의(메모리 할당 및 초기화)

void test_global(void)
{
    global++;
}