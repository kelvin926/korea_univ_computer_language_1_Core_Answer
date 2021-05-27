#include <stdio.h>

int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *p = arr;    // 배열의 이름, 배열의 시작 주소, &arr[0]은 모두 같다.  
    int i;

    for (i = 0; i < 5; i++)
        printf("p[%d] = %d\n", i, p[i]); // p를 배열 이름인 것처럼 사용한다.
    return 0;
}