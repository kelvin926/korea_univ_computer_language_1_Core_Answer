#include <stdio.h>

int main(void)
{
    int x[5] = { 1, 2, 3, 4, 5 };
    int y[5];
    int *p = x;         // p�� x[0]�� ����Ų��.
    int i;

    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);
    printf("\n");

    p = y;              // p�� ���� y[0]�� ����Ų��.
    for (i = 0; i < 5; i++)
        p[i] = x[i];    // p�� ����Ű�� y �迭�� x �迭�� �����Ѵ�.

    for (i = 0; i < 5; i++, p++)
        printf("%d ", *p);
    printf("\n");
    return 0;
}