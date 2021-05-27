#include <stdio.h>
#define MAX 10
void print_array(int arr[], int size);  // �Լ� ����

int main(void)
{
    int scores[] = { 99, 98, 67, 72, 90, 82 };
    int size = sizeof(scores) / sizeof(scores[0]);
    int arr[MAX] = { 0 };

    print_array(scores, size);  // ũ�Ⱑ 6�� int �迭 ���
    print_array(arr, MAX);      // ũ�Ⱑ 10�� int �迭 ���
    return 0;
}

void print_array(int arr[], int size)   // �迭�� ���Ҹ� ����ϴ� �Լ�
{
    int  i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}