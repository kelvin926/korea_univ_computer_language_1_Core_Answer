#include <stdio.h>

int main(void)
{
    int num = 0;    
    int sum = 0;  
    int i = 0;      // for�� �ʱ��

    printf("���� 5���� �Է��ϼ���: ");
    while (i < 5)   // ���ǽ�
    {
        // �ݺ��� ����
        scanf("%d", &num);     
        sum += num;
        i++;    // for�� ������
    }
    printf("�հ�: %d\n", sum);

    return 0;
}