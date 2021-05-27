#include <stdio.h>

union test {
    int i;                          // ��� ����� ���� �ּҿ� �Ҵ�ȴ�.
    char c;
    short s;
};

int main(void)
{
    union test t1 = { 0x12345678 }; // t1.i�� �ʱ�ȭ�Ѵ�.

    printf("sizeof(union test) = %d\n", sizeof(union test));

    printf("t1.i�� �ּ� = %p\n", &t1.i);   // ������� �ּҰ� ��� ����.
    printf("t1.c�� �ּ� = %p\n", &t1.c);
    printf("t1.s�� �ּ� = %p\n", &t1.s);

    printf("t1.i = %x\n", t1.i);    // 12345678 ���
    printf("t1.c = %x\n", t1.c);    // 78 ���
    printf("t1.s = %x\n", t1.s);    // 5678 ���

    return 0;
}