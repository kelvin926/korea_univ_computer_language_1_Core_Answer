#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "func.h"   // �ٸ� �ҽ� ���Ͽ� ���ǵ� �Լ��� ȣ���Ϸ��� ��� ������ �����Ѵ�.

int main(void)
{
    int i;
    int arr[6] = { 0 };

    srand((unsigned int)time(NULL));

    for (i = 0; i < 6; i++)     // 0~99������ ������ ������ 6�� �����Ѵ�.
        arr[i] = rand() % 100;

    printf("arr: ");
    print_array(arr, 6);

    for (i = 0; i < 6; i++)     // ������ ����/10���� get_factorial ȣ��
        printf("%2d! = %7d\n", arr[i]/10, get_factorial(arr[i] / 10));

    for (i = 0; i < 6; i += 2)  // ������ ���� 2���� get_gcd ȣ��
        printf("%d�� %d�� GCD = %d\n",
            arr[i], arr[i + 1], get_gcd(arr[i], arr[i + 1]));

    for (i = 0; i < 6; i += 3)  // ������ ���� 3���� get_max ȣ��
        printf("%d, %d, %d �� max = %d\n", arr[i], arr[i + 1], arr[i + 2],
            get_max(arr[i], arr[i + 1], arr[i + 2]));

    return 0;
}