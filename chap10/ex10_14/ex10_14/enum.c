#include <stdio.h>

enum direction {NORTH, SOUTH, EAST, WEST};

int main(void)
{
    enum direction d1 = NORTH;  // ����ü ���� ����

    d1 = EAST;                  // ����ü ������ ���� ����� �����Ѵ�.
    printf("d1 = %d\n", d1);    // 2�� ��µȴ�.

    switch (d1)
    {
    case NORTH:                 // ���� ����� case���� ����� �� �ִ�.
        printf("�������� �̵��մϴ�.\n");
        break;
    case SOUTH:
        printf("�������� �̵��մϴ�.\n");
        break;
    case EAST:
        printf("�������� �̵��մϴ�.\n");
        break;
    case WEST:
        printf("�������� �̵��մϴ�.\n");
        break;
    }
    return 0;
}