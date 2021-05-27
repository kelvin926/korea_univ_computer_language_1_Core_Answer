#include <stdio.h>
#define MAX 10
void print_array(int arr[], int size);  // 함수 선언

int main(void)
{
    int scores[] = { 99, 98, 67, 72, 90, 82 };
    int size = sizeof(scores) / sizeof(scores[0]);
    int arr[MAX] = { 0 };

    print_array(scores, size);  // 크기가 6인 int 배열 출력
    print_array(arr, MAX);      // 크기가 10인 int 배열 출력
    return 0;
}

void print_array(int arr[], int size)   // 배열의 원소를 출력하는 함수
{
    int  i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}