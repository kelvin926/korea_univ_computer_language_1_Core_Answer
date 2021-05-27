#include <stdio.h>

void accumulator(char op, int operand);

int main(void)
{
    while (1)
    {
        char op;
        int num;
        printf("�����ڿ� ������ �Է��ϼ���(. 0 �Է½� ����): ");
        scanf(" %c %d", &op, &num);
        if (op == '.' && num == 0)
            break;
        accumulator(op, num);
    }

    return 0;
}

void accumulator(char op, int operand)
{
    static int result = 0;  // ���α׷� ���� �� �ѹ��� �����ǰ� �ʱ�ȭ�ȴ�.
    switch (op)
    {
    case '+':
        result += operand;
        break;
    case '-':
        result -= operand;
        break;
    case '*':
        result *= operand;
        break;
    case '/':
        result /= operand;
        break;
    default:
        return;
    }
    printf("%c %d = %d\n", op, operand, result);
}