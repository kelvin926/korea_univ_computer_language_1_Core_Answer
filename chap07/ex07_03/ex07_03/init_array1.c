#include <stdio.h>

int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 }; // 배열의 크기만큼 초기값을 지정한다.
    int i;

    printf("arr = ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}