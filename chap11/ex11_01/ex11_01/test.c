#include <stdio.h>

int global = 123;   // ������ �����̸鼭 ����(�޸� �Ҵ� �� �ʱ�ȭ)

void test_global(void)
{
    global++;
}