#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;

    printf("�� ���� ������ �Է��ϼ��� : ");
    scanf("%d %d", &x, &y);

    printf("+%d = %d\n", x, +x);            // �÷��� ��ȣ
    printf("-%d = %d\n", y, -y);            // ���̳ʽ� ��ȣ
    printf("%d + %d = %d\n", x, y, x + y);  // ���ϱ�
    printf("%d - %d = %d\n", x, y, x - y);  // ����
    printf("%d * %d = %d\n", x, y, x * y);  // ���ϱ�
    printf("%d / %d = %d\n", x, y, x / y);  // ������
    printf("%d %% %d = %d\n", x, y, x % y); // ������

    return 0;
}