// �Լ��� ���Ǹ� ��Ƴ��� �ҽ� ���� func.c

int get_gcd(int x, int y)     // �Լ��� ������ extern�� ������ �� �ִ�.
{
    int r;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

extern int get_factorial(int num)
{
    int i;
    int result = 1;

    for (i = 1; i <= num; i++)
        result *= i;
    return result;
}