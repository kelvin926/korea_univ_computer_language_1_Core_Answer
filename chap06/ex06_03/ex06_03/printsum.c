#include <stdio.h>

void print_sum(int count)
{
    int i;
    int num;        // �Է¹��� ������ ������ ����
    int sum = 0;    // �հ踦 ������ ����

    printf("%d���� ����? ", count);
    for (i = 0; i < count; i++) // ������ count�� �Է� �޾� �հ踦 ���Ѵ�.
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("�հ� : %d\n", sum);
}

int main(void)
{
    int i;

    for (i = 3; i < 10; i += 2)
    {
        print_sum(i);    // �ݺ��� �ȿ��� �Լ��� ȣ���� �� �ִ�.
    }

    return 0;
}