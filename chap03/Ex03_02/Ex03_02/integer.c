#include <stdio.h>

int main(void)
{
    printf(" 7 = %08x\n", 7);   // 16������ 8���� ���� ���缭 ���, ��ĭ���� 0 ���
    printf("-7 = %08x\n", -7);
    printf("7+(-10) = %08x\n", 7 + (-10));

    return 0;
}