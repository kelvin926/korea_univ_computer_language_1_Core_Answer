#include <stdio.h>
#define ARR_SIZE 5

int add(int a, int b)   //  int���� �Ű������� ���� �Լ�
{
    return a + b;
}

int main(void)
{
    int arr[ARR_SIZE] = { 0 };      // �迭 ��ü�� 0���� �ʱ�ȭ
    int i;

    arr[0] = 5;
    arr[1] = arr[0] + 10;           // �迭�� ���Ҹ� ���Ŀ� �̿��� �� �ִ�.
    arr[2] = add(arr[0], arr[1]);   // �迭�� ���Ҹ� �Լ��� ���ڷ� ������ �� �ִ�.
    printf("������ 2�� �Է��ϼ���: ");
    scanf("%d %d", &arr[3], &arr[4]); // �迭�� ���ҿ� ���� �Է¹��� �� �ִ�.

    for (i = 0; i < ARR_SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}