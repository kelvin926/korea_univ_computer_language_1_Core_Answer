#include <stdio.h>

int get_gcd(int x, int y)
{
    int r;
    while (y != 0) {    // ��Ŭ���� ȣ�������� �ִ������� ���Ѵ�.
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
        printf("���� 2���� �Է��ϼ���. (0 0�̸� ����): ");
        scanf("%d %d", &x, &y);
        if (x == 0 && y == 0)
            break;
        gcd = get_gcd(x, y);
        printf("%d�� %d�� GCD: %d\n", x, y, gcd);
    }
    return 0;
}