#include <stdio.h>
#define ROW 3
#define COL 2

int main(void)
{
    int data[ROW][COL] = {
        {10, 20}, {30, 40}, {50, 60},
    };
    int i, j;

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            printf("%3d ", data[i][j]);
        printf("\n");
    }
    return 0;
}