#include <stdio.h>

int main(void)
{
    int x[5] = { 1, 2, 3, 4, 5 };
    int y[5];
    int *p = x;         // p는 x[0]을 가리킨다.
    int i;

    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);
    printf("\n");

    p = y;              // p는 이제 y[0]을 가리킨다.
    for (i = 0; i < 5; i++)
        p[i] = x[i];    // p가 가리키는 y 배열에 x 배열을 복사한다.

    for (i = 0; i < 5; i++, p++)
        printf("%d ", *p);
    printf("\n");
    return 0;
}