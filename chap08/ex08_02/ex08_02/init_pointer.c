#include <stdio.h>

int main(void)
{
    //int *p1 = 0x12345678;     // ������ ����
    int *p2 = (int*)0x12345678; // ���� ������ �߻��� �� �ִ�.

    int a = 10;
    int *p3 = &a;   // a�� �ּҸ� ���ؼ� p�� �ʱ�ȭ�Ѵ�.

    int *p4 = 0;    // � ������ �ּҷ� �ʱ�ȭ���� �� �� ������ 0���� �ʱ�ȭ�Ѵ�.
    int *p5 = NULL; // 0 ��� NULL�� ����ص� �ȴ�.
    
    printf("p2 = %p\n", p2);   // p2�� ����� �ּҸ� ����Ѵ�.
    printf("p3 = %p\n", p3);
    printf("p4 = %p\n", p4);
    printf("p4 = %p\n", p5);

    return 0;
} 