#include <stdio.h>

int main(void)
{
    int x, y;

    printf("���� 2���� �Է��ϼ���: ");
    scanf("%d %d", &x, &y);

    if (y != 0) 
        printf("%d / %d = %f\n", x, y, (double)x / y);
    else 
        printf("0���� ���� �� �����ϴ�.\n");

    return 0;
}