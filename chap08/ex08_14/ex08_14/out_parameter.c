#include <stdio.h>
void get_sum_product(int x, int y, int *sum, int *product);

int main(void)
{
    int result1, result2;

    // 2. �Լ��� ȣ���� �� ó�� ����� �޾ƿ� ������ �ּҸ� �����Ѵ�
    get_sum_product(10, 20, &result1, &result2);
    printf("sum = %d, product = %d\n", result1, result2);
    return 0;
}

// 1. ó�� ����� ������ ������ ����Ű�� ������������ �Ű������� �����Ѵ�.
void get_sum_product(int x, int y, int *sum, int *product)
{
    // 3. ���������� �Ű������� ����Ű�� ���� ó�� ����� �����Ѵ�.
    *sum = x + y;
    *product = x * y;
}