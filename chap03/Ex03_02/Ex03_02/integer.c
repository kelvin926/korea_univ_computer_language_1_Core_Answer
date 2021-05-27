#include <stdio.h>

int main(void)
{
    printf(" 7 = %08x\n", 7);   // 16진수로 8문자 폭에 맞춰서 출력, 빈칸에는 0 출력
    printf("-7 = %08x\n", -7);
    printf("7+(-10) = %08x\n", 7 + (-10));

    return 0;
}