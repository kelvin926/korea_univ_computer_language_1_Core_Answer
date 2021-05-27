#include <stdio.h>

typedef struct point {
    int  x, y;
} POINT;

#define DEF_RANGE_OF(rtype) \
  typedef struct range_of_##rtype { \
       rtype start; \
       rtype end; \
  } RANGE_OF_##rtype;

DEF_RANGE_OF(int)      // RANGE_OF_int 형을 정의한다.
DEF_RANGE_OF(double)   // RANGE_OF_double 형을 정의한다.
DEF_RANGE_OF(POINT)    // RANGE_OF_POINT 형을 정의한다.

#define IN_RANGE(val, range)  \
    (((val) >= (range.start)) && ((val) <= (range.end)))

int main(void)
{
    RANGE_OF_int hour_range = { 0,23 };    // 시의 유효범위를 나타내는 변수
    RANGE_OF_int minute_range = { 0, 59 }; // 분의 유효범위를 나타내는 변수
    int hour, minute;

    while (1)       // hour에 대하여 0~23사이의 값만 입력받도록 처리한다.
    {
        printf("몇 시? ");
        scanf("%d", &hour);
        if (IN_RANGE(hour, hour_range))     // hour가 유효범위 내에 있는지 검사한다.
            break;
        printf("잘못 입력하셨습니다.\n");
    }
    while (1)       // minute에 대하여 0~59사이의 값만 입력받도록 처리한다.
    {
        printf("분? ");
        scanf("%d", &minute);
        if (IN_RANGE(minute, minute_range)) // minute가 유효범위 내에 있는지 검사한다.
            break;
        printf("잘못 입력하셨습니다.\n");
    }
    printf("입력된 시간은 %d시 %d분입니다.\n", hour, minute);

    return 0;
}