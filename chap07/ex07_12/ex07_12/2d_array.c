#include <stdio.h>
#define ROW 3
#define COL 2

int main(void)
{
    int data[ROW][COL];
    int i, j, k;

    for (i = 0, k = 0; i < ROW; i++)    // �� �ε����� ������Ų��.
        for (j = 0; j < COL; j++)       // �� �ε����� ������Ų��.
            data[i][j] = ++k;           // �迭�� ���ҿ� 0���� 1�� Ŀ���� ���� �����Ѵ�.

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            printf("%3d ", data[i][j]);
        printf("\n");
    }

    printf("sizeof(data) = %d\n", sizeof(data));            // �迭 ��ü�� ����Ʈ ũ��
    printf("sizeof(data[0]) = %d\n", sizeof(data[0]));      // int 2���� data[0]�� ����Ʈ ũ��
    printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));// int�� data[0][0]�� ����Ʈ ũ��
    return 0;
}