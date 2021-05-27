#include <stdio.h>
#include <stdlib.h>         // srand, rand 호출 시 필요
#include <time.h>           // time 호출 시 필요

// 다른 소스 파일에 정의된 함수를 호출하려면 함수 선언이 필요하다.
int get_gcd(int x, int y);  // 함수 선언의 extern은 생략할 수 있다.
extern int get_factorial(int num);

int main(void)
{
    int i;
    srand((unsigned int)time(NULL));    // 난수의 시드를 지정한다.

    // 0~9사이의 임의의 정수에 대해서 팩토리얼을 구한다.
    for (i = 0; i < 5; i++)
    {
        int num = rand() % 10;
        printf("%2d! = %7d\n", num, get_factorial(num));
    }

    // 0~99사이의 임의의 정수 2개에 대해서 최대 공약수를 구한다.
    for (i = 0; i <= 5; i++)
    {
        int a = rand() % 100;
        int b = rand() % 100;
        printf("%2d와 %2d의 GCD = %2d\n", a, b, get_gcd(a, b));
    }

    return 0;
}