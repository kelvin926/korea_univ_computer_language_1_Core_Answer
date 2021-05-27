#include <stdio.h>

typedef struct date {
    unsigned short year : 7;
    unsigned short month : 4;
    unsigned short day : 5;
    // the_day_of_week 멤버가 추가되면 DATE의 크기는 4바이트가 된다.
    //unsigned short the_day_of_week : 3;
} DATE;

int main(void)
{
    DATE dday;
    dday.year = 18;     // 연도를 0~99사이의 값으로 저장한다.
    dday.month = 11;
    dday.day = 30;

    printf("DATE의 크기 = %d\n", sizeof(DATE));
    printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

    return 0;
}