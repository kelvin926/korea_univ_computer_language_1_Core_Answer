#include <stdio.h>

int main(void)
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    int i;

    printf("arr = ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("arr[5] = %d\n", arr[5]);    // �Ҵ���� ���� �޸𸮸� �о�´�.
    arr[5] = 100;                       // �Ҵ���� ���� �޸𸮸� �����Ѵ�. (���� ����)

    return 0;
}