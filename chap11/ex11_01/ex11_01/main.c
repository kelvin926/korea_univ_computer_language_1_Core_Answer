#include <stdio.h>

void test_global(void); // �ٸ� �ҽ� ������ �Լ��� ȣ���Ϸ��� �Լ� ���� �ʿ�

extern int global;      // 'global�̶�� ������ �ִ�.'��� �˷��ش�.

int main(void)
{
    test_global();
    printf("global = %d\n", global);

    return 0;
}