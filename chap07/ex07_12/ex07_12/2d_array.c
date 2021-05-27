#include <stdio.h>
#define ROW 3
#define COL 2

int main(void)
{
    int data[ROW][COL];
    int i, j, k;

    for (i = 0, k = 0; i < ROW; i++)    // 행 인덱스를 증가시킨다.
        for (j = 0; j < COL; j++)       // 열 인덱스를 증가시킨다.
            data[i][j] = ++k;           // 배열의 원소에 0부터 1씩 커지는 값을 저장한다.

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            printf("%3d ", data[i][j]);
        printf("\n");
    }

    printf("sizeof(data) = %d\n", sizeof(data));            // 배열 전체의 바이트 크기
    printf("sizeof(data[0]) = %d\n", sizeof(data[0]));      // int 2개인 data[0]의 바이트 크기
    printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));// int인 data[0][0]의 바이트 크기
    return 0;
}