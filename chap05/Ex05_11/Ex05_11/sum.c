#include <stdio.h>

int main(void)
{
    int num = 0;    // �Է¹��� ������ ������ ����
    int sum = 0;    // �հ踦 ������ ����
    int i;          // ���� ���� ����

    printf("���� 5���� �Է��ϼ���: ");
    for (i = 0; i < 5; i++)    // i�� 5�� �Ǹ� ���� Ż��
    {
        scanf("%d", &num);      // i�� 0, 1, 2, 3, 4�� �� �ݺ� ����
        sum += num;
    }
    printf("�հ�: %d\n", sum);    

    return 0;
}