#include <stdio.h>

int get_factorial(int num)
{
    int i;
    int result = 1;

    for (i = 1; i <= num; i++)  // num!을 구한다.
        result *= i;
    return result;              // num! 값을 리턴한다.
}

int main(void)
{
    int i;
    int fact;

    for (i = 1; i <= 5; i++)
    {
        fact = get_factorial(i);  // get_factorial(i)의 리턴 값을 저장
        printf("%2d! = %3d\n", i, fact);
    }
    get_factorial(5);   // 리턴 값을 어디에도 이용하지 않는다.

    return 0;
}