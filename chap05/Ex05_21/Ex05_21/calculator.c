#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    while (1)
    {
        printf("����? ");
        scanf("%d %c %d", &a, &op, &b); 

        // 0 0 0�� �ԷµǸ� ������ ����������.
        if (a == 0 && op == '0' && b == 0) 
            break;

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
    }

    return 0;
}