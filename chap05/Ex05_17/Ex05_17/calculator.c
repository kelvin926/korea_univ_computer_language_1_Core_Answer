#include <stdio.h>

int main(void)
{
    int a, b;
    char op;
    char yesno;                         // yesno의 초기화를 생략할 수 있다.

    do {                                // 일단 한번 수행한다.
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
        default:    // +, -, *, /가 아닌 경우
            printf("잘못된 수식입니다.\n");
            break;
        }
        printf("계속 하시겠습니까(Y/N)? ");
        scanf(" %c", &yesno);
    } while (yesno == 'Y' || yesno == 'y');

    return 0;
}