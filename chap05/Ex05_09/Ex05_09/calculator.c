#include <stdio.h>

int main(void)
{
    int a, b;   // 피연산자
    char op;    // 연산자 기호를 문자로 저장할 변수

    printf("수식? ");
    scanf("%d %c %d", &a, &op, &b); // 10 + 30 형태로 입력 받는다.

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
            printf("0으로 나눌 수 없습니다.\n");
        break;
    default:            // +, -, *, /가 아닌 경우
        printf("잘못된 수식입니다.\n");
        break;
    }

    return 0;
}