#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int *arr[5] = { &a, &b, &c, &d, &e };   // int의 주소로 초기화된 포인터 배열
    int i;

    for (i = 0; i < 5; i++)
    {
        *arr[i] = i;
        printf("%d ", *arr[i]);             // arr[i]는 포인터이다.
    }
    printf("\n");

    return 0;
}