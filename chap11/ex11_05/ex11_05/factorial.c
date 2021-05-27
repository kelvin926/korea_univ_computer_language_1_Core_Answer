#include <stdio.h>

int get_factorial(int num);

int main(void)
{
    int i;

    for (i = 0; i <= 10; i++)
        printf("%2d!= %7d\n", i, get_factorial(i));

    return 0;
}

int get_factorial(int num)      // ��� �Լ��� ���ǵ� get_factorial
{
    if (num <= 1)
        return 1;
    return num * get_factorial(num - 1);
}