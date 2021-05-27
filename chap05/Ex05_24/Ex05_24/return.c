#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i > 0; i--)
    {
        if (i % 3 == 0)
            return 1;    // main 함수를 리턴시킨다. (프로그램 종료)
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}