#include <stdio.h>

int main(void)
{
    int data[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    int(*p)[5] = &data[0];              // int[5] 배열에 대한 포인터
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%2d ", p[i][j]);    // 2차원 배열인 것처럼 사용한다.
        printf("\n");
    }

    return 0;
}