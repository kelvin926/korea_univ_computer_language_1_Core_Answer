#include <stdio.h>

int get_max(int a, int b, int c)    
{
    int max = a > b ? a : b;
    max = c > max ? c : max;
    return max;
}

int main(void)
{
    int x, y, z;

    while (1)
    {
        printf("���� 3���� �Է��ϼ��� (0 0 0 �Է� �� ����): ");
        scanf("%d %d %d", &x, &y, &z);
        
        if (x == 0 && y == 0 && z == 0)
            break;
        printf("�ִ밪: %d\n", get_max(x, y, z));
    }
    return 0;
}