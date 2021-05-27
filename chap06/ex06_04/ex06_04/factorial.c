#include <stdio.h>

int get_factorial(int num)
{
    int i;
    int result = 1;

    for (i = 1; i <= num; i++)  // num!�� ���Ѵ�.
        result *= i;
    return result;              // num! ���� �����Ѵ�.
}

int main(void)
{
    int i;
    int fact;

    for (i = 1; i <= 5; i++)
    {
        fact = get_factorial(i);  // get_factorial(i)�� ���� ���� ����
        printf("%2d! = %3d\n", i, fact);
    }
    get_factorial(5);   // ���� ���� ��𿡵� �̿����� �ʴ´�.

    return 0;
}