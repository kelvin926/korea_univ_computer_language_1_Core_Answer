#include <stdio.h>

int main(void)
{
    int a, b;   // �ǿ�����
    char op;    // ������ ��ȣ�� ���ڷ� ������ ����

    printf("����? ");
    scanf("%d %c %d", &a, &op, &b); // 10 + 30 ���·� �Է� �޴´�.

    switch (op) {
    case '+':    
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        if (b != 0)
            printf("%d / %d = %.2f\n", a, b, (double)a / b);
        else
            printf("0���� ���� �� �����ϴ�.\n");
        break;
    default:            // +, -, *, /�� �ƴ� ���
        printf("�߸��� �����Դϴ�.\n");
        break;
    }

    return 0;
}