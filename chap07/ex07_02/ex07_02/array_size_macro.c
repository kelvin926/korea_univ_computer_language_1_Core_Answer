#include <stdio.h>

#define ARR_SIZE 5      // �迭�� ũ��� ����� ��ũ�� ����� ����

int main(void)
{
    int arr[ARR_SIZE];  // �迭�� ũ�⸦ ��ũ�� ����� ������ �� �ִ�.
    int i;

    for (i = 0; i < ARR_SIZE; i++)  // �迭�� ũ�Ⱑ �ʿ��ϸ� ARR_SIZE �̿�
        arr[i] = 0;

    printf("arr = ");
    for (i = 0; i < ARR_SIZE; i++)  // �迭�� ũ�Ⱑ �ʿ��ϸ� ARR_SIZE �̿�
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}