#include <stdio.h>

void hi(void)   // �������� �Ű������� ���� �Լ�
{
    printf("Hi! Let's enjoy C prgramming.\n");
}               // �Լ��� ���� ������ �����Ѵ�.

void bye() { printf("Bye!\n"); }  // ������ �Լ��� �� �ٷ� �ۼ��� �� �ִ�.

int main(void)
{
    hi();
    bye();

    hi();       // ���� �Լ��� ���� �� ȣ���� �� �ִ�.
    bye();

    return 0;
}