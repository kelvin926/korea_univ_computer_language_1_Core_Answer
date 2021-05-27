#include <stdio.h>
#include <stdlib.h>

#define SORT_METHOD 1   // 정렬 방법을 결정하는 매크로의 정의

int compare_int(const void *e1, const void *e2);
void selection_sort(int arr[], int size);
void sort(int arr[], int size);
void print_array(const int arr[], int size);

int main(void)
{
    int arr[10] = { 12, 34, 52, 5, 66, 73, 49, 86, 99, 27 };

#if 0                   // 다음 두 문장을 컴파일하지 않게 만든다.
    puts("<<정렬전>>");
    print_array(arr, 10);
#endif
    sort(arr, 10);
    puts("<<정렬후>>");
    print_array(arr, 10);

    return 0;
}

void sort(int arr[], int size)
{
#if SORT_METHOD == 1
    selection_sort(arr, size);
#elif SORT_METHOD == 2
    qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);
#else
    // don't sort
#endif
}

int compare_int(const void *e1, const void *e2)
{
    const int *p1 = (const int*)e1;
    const int *p2 = (const int*)e2;
    return (*p1 - *p2);
}

void selection_sort(int arr[], int size)
{
    int i, j;
    int index;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        index = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[index] > arr[j])
                index = j;
        }
        if (i != index)
        {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}

void print_array(const int arr[], int size)
{
    int  i;
    for (i = 0; i < size; i++)
        printf("%2d ", arr[i]);
    printf("\n");
}