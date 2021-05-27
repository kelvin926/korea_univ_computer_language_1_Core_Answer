#include <stdio.h>

typedef struct date {
    unsigned short year : 7;
    unsigned short month : 4;
    unsigned short day : 5;
    // the_day_of_week ����� �߰��Ǹ� DATE�� ũ��� 4����Ʈ�� �ȴ�.
    //unsigned short the_day_of_week : 3;
} DATE;

int main(void)
{
    DATE dday;
    dday.year = 18;     // ������ 0~99������ ������ �����Ѵ�.
    dday.month = 11;
    dday.day = 30;

    printf("DATE�� ũ�� = %d\n", sizeof(DATE));
    printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

    return 0;
}