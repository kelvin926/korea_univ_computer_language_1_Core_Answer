#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

int compare_int(const void *e1, const void *e2);
void print_array(const int arr[], int size);    // �迭 ���Ҹ� ����ϴ� �Լ�

int main(void)
{
    int arr[ARR_SIZE] = { 0 };
    int i;

    srand((unsigned int)time(NULL));

    // �迭�� 0~99 ������ ������ ������ ä���.
    for (i = 0; i < ARR_SIZE; i++)
        arr[i] = rand() % 100;

    puts("<< ���� �� >>");
    print_array(arr, ARR_SIZE);

    qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);

    puts("<< ���� �� >>");
    print_array(arr, ARR_SIZE);

    return 0;
}

// int �迭�� ���Ҹ� ���ϴ� �Լ�
int compare_int(const void *e1, const void *e2)
{
    // e1, e2�� int�� �ּ��̹Ƿ� const int*������ �� ��ȯ�ؼ� ����Ѵ�.
    const int *p1 = (const int*)e1;	
    const int *p2 = (const int*)e2;	
    return (*p1 - *p2);
}

void print_array(const int arr[], int size)
{
    int  i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}