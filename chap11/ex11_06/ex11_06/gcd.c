#include <stdio.h>

int get_gcd(int x, int y);

int main(void)
{
    int a = 0, b = 0;

    while (1)
    {
        printf("2개의 정수(0 0 입력 시 종료)? ");
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0)
            break;
        printf("%d와 %d의 GCD = %d\n", a, b, get_gcd(a, b));
    }

    return 0;
}

int get_gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    return get_gcd(y, x % y);
}