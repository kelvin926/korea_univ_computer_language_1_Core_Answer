#include <stdio.h>

int main(void)
{
    int a, b;   // �ǿ�����
    char op;    // ������ ��ȣ�� ���ڷ� ������ ����

    printf("����? ");
    scanf("%d %c %d", &a, &op, &b); // 10 + 30 ���·� �Է� �޴´�.

    if (op == '+') {
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (op == '-') {
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (op == '*') {
        printf("%d * %d = %d\n", a, b, a * b);
    }
    else if (op == '/') {
        if (b != 0)     // ��ø�� if
            printf("%d / %d = %.2f\n", a, b, (double)a / b);
        else
            printf("0���� ���� �� �����ϴ�.\n");
    }
    else {              // +, -, *, /�� �ƴ� ���
        printf("�߸��� �����Դϴ�.\n");
    }

    return 0;
}