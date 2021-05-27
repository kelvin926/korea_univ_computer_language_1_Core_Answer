#include <stdio.h>

int main(void)
{
    int x[5] = { 10, 20, 30, 40, 50 };
    int y[5] = { 0 };
    int i;

    //y = x;   // 배열을 다른 배열에 대입할 수 없다. (컴파일 에러)

    for (i = 0; i < 5; i++)
        y[i] = x[i];    // 배열의 원소끼리 1:1로 대입한다. (배열의 복사)

    printf("y = ");
    for (i = 0; i < 5; i++)
        printf("%d ", y[i]);
    printf("\n");

    return 0;
}