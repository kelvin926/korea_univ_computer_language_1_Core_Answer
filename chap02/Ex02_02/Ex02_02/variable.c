#include <stdio.h>

int main()
{
    int num;    // ������ ���� ����
    float x;    // �Ǽ��� ���� ����
    char ch;    // ������ ���� ����

    num = 123;  // ������ ������ �� ����
    x = 1.23;   // �Ǽ��� ������ �� ����
    ch = 'A';   // ������ ������ �� ����

    printf("%d %x\n", num, num);    // 10����, 16���� ���
    printf("%f %e\n", x, x);        // �ε��Ҽ���, ���� ���
    printf("%c\n", ch);             // ���� ���

    printf("%x\n", num);    // 7b ���
    printf("%X\n", num);    // 7B ���
    printf("%#x\n", num);   // 0x7b ���
    printf("%#X\n", num);   // 0X7B ���

    return 0;
}