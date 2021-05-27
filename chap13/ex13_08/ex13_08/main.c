#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "func.h"   // 다른 소스 파일에 정의된 함수를 호출하려면 헤더 파일을 포함한다.

int main(void)
{
    int i;
    int arr[6] = { 0 };

    srand((unsigned int)time(NULL));

    for (i = 0; i < 6; i++)     // 0~99사이의 임의의 정수를 6개 생성한다.
        arr[i] = rand() % 100;

    printf("arr: ");
    print_array(arr, 6);

    for (i = 0; i < 6; i++)     // 임의의 정수/10으로 get_factorial 호출
        printf("%2d! = %7d\n", arr[i]/10, get_factorial(arr[i] / 10));

    for (i = 0; i < 6; i += 2)  // 임의의 정수 2개로 get_gcd 호출
        printf("%d와 %d의 GCD = %d\n",
            arr[i], arr[i + 1], get_gcd(arr[i], arr[i + 1]));

    for (i = 0; i < 6; i += 3)  // 임의의 정수 3개로 get_max 호출
        printf("%d, %d, %d 중 max = %d\n", arr[i], arr[i + 1], arr[i + 2],
            get_max(arr[i], arr[i + 1], arr[i + 2]));

    return 0;
}