#include <stdio.h>

typedef struct point {
    int  x, y;
} POINT;

#define DEF_RANGE_OF(rtype) \
  typedef struct range_of_##rtype { \
       rtype start; \
       rtype end; \
  } RANGE_OF_##rtype;

DEF_RANGE_OF(int)      // RANGE_OF_int ���� �����Ѵ�.
DEF_RANGE_OF(double)   // RANGE_OF_double ���� �����Ѵ�.
DEF_RANGE_OF(POINT)    // RANGE_OF_POINT ���� �����Ѵ�.

#define IN_RANGE(val, range)  \
    (((val) >= (range.start)) && ((val) <= (range.end)))

int main(void)
{
    RANGE_OF_int hour_range = { 0,23 };    // ���� ��ȿ������ ��Ÿ���� ����
    RANGE_OF_int minute_range = { 0, 59 }; // ���� ��ȿ������ ��Ÿ���� ����
    int hour, minute;

    while (1)       // hour�� ���Ͽ� 0~23������ ���� �Է¹޵��� ó���Ѵ�.
    {
        printf("�� ��? ");
        scanf("%d", &hour);
        if (IN_RANGE(hour, hour_range))     // hour�� ��ȿ���� ���� �ִ��� �˻��Ѵ�.
            break;
        printf("�߸� �Է��ϼ̽��ϴ�.\n");
    }
    while (1)       // minute�� ���Ͽ� 0~59������ ���� �Է¹޵��� ó���Ѵ�.
    {
        printf("��? ");
        scanf("%d", &minute);
        if (IN_RANGE(minute, minute_range)) // minute�� ��ȿ���� ���� �ִ��� �˻��Ѵ�.
            break;
        printf("�߸� �Է��ϼ̽��ϴ�.\n");
    }
    printf("�Էµ� �ð��� %d�� %d���Դϴ�.\n", hour, minute);

    return 0;
}