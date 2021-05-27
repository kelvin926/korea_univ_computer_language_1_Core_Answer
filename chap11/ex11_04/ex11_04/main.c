#include <stdio.h>
#include <stdlib.h>         // srand, rand ȣ�� �� �ʿ�
#include <time.h>           // time ȣ�� �� �ʿ�

// �ٸ� �ҽ� ���Ͽ� ���ǵ� �Լ��� ȣ���Ϸ��� �Լ� ������ �ʿ��ϴ�.
int get_gcd(int x, int y);  // �Լ� ������ extern�� ������ �� �ִ�.
extern int get_factorial(int num);

int main(void)
{
    int i;
    srand((unsigned int)time(NULL));    // ������ �õ带 �����Ѵ�.

    // 0~9������ ������ ������ ���ؼ� ���丮���� ���Ѵ�.
    for (i = 0; i < 5; i++)
    {
        int num = rand() % 10;
        printf("%2d! = %7d\n", num, get_factorial(num));
    }

    // 0~99������ ������ ���� 2���� ���ؼ� �ִ� ������� ���Ѵ�.
    for (i = 0; i <= 5; i++)
    {
        int a = rand() % 100;
        int b = rand() % 100;
        printf("%2d�� %2d�� GCD = %2d\n", a, b, get_gcd(a, b));
    }

    return 0;
}