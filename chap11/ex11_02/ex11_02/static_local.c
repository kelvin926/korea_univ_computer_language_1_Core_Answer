#include <stdio.h>

void test_static(void)
{
    int local = 0;          // �Լ��� ȣ��� ������ �����ȴ�.
    static int s_local = 0; // ���α׷� ���� �� �����ȴ�.

    printf("local = %d, ", local++);
    printf("s_local = %d\n", s_local++);
}   // �Լ� ���� �� local�� �Ҹ������ s_local�� �Ҹ���� �ʴ´�.

int main(void)
{
    int i = 0;
    for (i = 0; i < 5; i++)
        test_static();      // test_static�� 5�� ȣ���Ѵ�.

    return 0;
}