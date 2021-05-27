#include <stdio.h>

int get_gcd(int x, int y)
{
    int r;
    while (y != 0) {    // 유클리드 호제법으로 최대공약수를 구한다.
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(void)
{
    int x, y;
    int gcd;

    while (1) {
        printf("정수 2개를 입력하세요. (0 0이면 종료): ");
        scanf("%d %d", &x, &y);
        if (x == 0 && y == 0)
            break;
        gcd = get_gcd(x, y);
        printf("%d와 %d의 GCD: %d\n", x, y, gcd);
    }
    return 0;
}