#include <stdio.h>

int main(void)
{
    int a, b;
    char op;
    char yesno = 'Y';   // ��� ���������� ��Ÿ���� ����

    while (yesno == 'Y' || yesno == 'y')
    {
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
        default:    // +, -, *, /�� �ƴ� ���
            printf("�߸��� �����Դϴ�.\n");
            break;
        }
        printf("��� �Ͻðڽ��ϱ�(Y/N)? ");
        scanf(" %c", &yesno);   
    }

    return 0;
}