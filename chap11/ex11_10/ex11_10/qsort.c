#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

int compare_int(const void *e1, const void *e2);
void print_array(const int arr[], int size);    // 배열 원소를 출력하는 함수

int main(void)
{
    int arr[ARR_SIZE] = { 0 };
    int i;

    srand((unsigned int)time(NULL));

    // 배열을 0~99 사이의 임의의 정수로 채운다.
    for (i = 0; i < ARR_SIZE; i++)
        arr[i] = rand() % 100;

    puts("<< 정렬 전 >>");
    print_array(arr, ARR_SIZE);

    qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);

    puts("<< 정렬 후 >>");
    print_array(arr, ARR_SIZE);

    return 0;
}

// int 배열의 원소를 비교하는 함수
int compare_int(const void *e1, const void *e2)
{
    // e1, e2는 int의 주소이므로 const int*형으로 형 변환해서 사용한다.
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