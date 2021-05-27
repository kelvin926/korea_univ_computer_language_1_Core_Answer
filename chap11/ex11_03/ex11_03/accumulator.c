#include <stdio.h>

void accumulator(char op, int operand);

int main(void)
{
    while (1)
    {
        char op;
        int num;
        printf("연산자와 정수를 입력하세요(. 0 입력시 종료): ");
        scanf(" %c %d", &op, &num);
        if (op == '.' && num == 0)
            break;
        accumulator(op, num);
    }

    return 0;
}

void accumulator(char op, int operand)
{
    static int result = 0;  // 프로그램 시작 시 한번만 생성되고 초기화된다.
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