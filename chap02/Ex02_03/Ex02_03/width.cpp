#include <stdio.h>

int main()
{
    int num = 12345;

    printf("%d\n", num);        
    printf("%d\n", num * 10);
    printf("%d\n", num * 100);
    printf("%d\n", num * 1000);

    printf("%8d\n", num);           // 8���� ���� ���缭 ���
    printf("%8d\n", num * 10);
    printf("%8d\n", num * 100);
    printf("%8d\n", num * 1000);
    printf("%8d\n", num * 100000);  // ���� ������ ū �� ���

    printf("%08d\n", num);          // ��ĭ ��� ���� ���� ���� �κп�  0 ���

    return 0;
}