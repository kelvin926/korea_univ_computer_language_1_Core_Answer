#include <stdio.h>

int main(void)
{
    int arr[5];         // 크기가 5인 배열
    int byte_size = 0;  // 배열의 바이트 크기를 저장할 변수
    int size = 0;       // 배열의 크기를 저장할 변수    
    int i;

    byte_size = sizeof(arr);                // 배열의 바이트 크기
    printf("배열의 바이트 크기: %d\n", byte_size);

    size = sizeof(arr) / sizeof(arr[0]);    // 배열의 크기(원소의 개수)
    printf("배열의 크기: %d\n", size);

    for (i = 0; i < size; i++)
        arr[i] = 0;

    return 0;
}