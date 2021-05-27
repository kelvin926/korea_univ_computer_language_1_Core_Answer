#include <stdio.h>

#define ARR_SIZE 10
#define DEBUG

#define PI 3.1415		// 실수형 상수를 매크로 상수로 정의한다.
area = PI * radius * radius;	// area = 3.1415 * radius * radius; 로 처리된다.

#define ABS(a) ((a>0)?(a):(-a))
#define SQUARE(x) ((x)*(x))

#define OPEN_ERROR "파일 열기 실패"
#define IO_ERROR "입출력 실패"
int main(void)
{
#define DWORD unsigned long
    DWORD dwflag;
#define PRINT puts
    PRINT("test");
    FILE *fp = fopen(...);
    if (fp == NULL)
        printf(OPEN_ERROR); // printf("파일 열기 실패");
    int sum = 0;
    int i;
    for (i = 0; i < MAX; i++)
        sum += i;
    return 0;
}