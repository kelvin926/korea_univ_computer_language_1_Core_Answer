#include <stdio.h>
#define DEBUG   // #ifdef의 조건으로 사용되는 매크로 정의
#define USER    // #ifdef의 조건으로 사용되는 매크로 정의

int get_factorial(int num);

int main(void)
{
    int i;

    for (i = 0; i <= 5; i++)
        printf("%2d! = %7d\n", i, get_factorial(i));

    return 0;
}

#ifdef USE_RECURSION
int get_factorial(int num)
{
#ifdef DEBUG
    printf("get_factorial(%d) is called...\n", num);
#endif
    if (num <= 1)
        return 1;
    return num * get_factorial(num - 1);
}
#else
int get_factorial(int num)
{
    int i;
    int result = 1;

#ifdef DEBUG
    printf("get_factorial(%d) is called...\n", num);
#endif
    for (i = 1; i <= num; i++)
        result *= i;
    return result;
}
#endif