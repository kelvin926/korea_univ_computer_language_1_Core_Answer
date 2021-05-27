#include <stdio.h>
#include <limits.h> // 정수형의 최대 최소를 나타내는 매크로 상수가 정의된 헤더 파일
#include <float.h>  // 실수형의 최대 최소를 나타내는 매크로 상수가 정의된 헤더 파일

int main(void)
{
    char a = CHAR_MAX;
    char b = CHAR_MAX + 1;  // 오버플로우
    short c = SHRT_MAX;
    short d = SHRT_MAX + 1; // 오버플로우
    int e = INT_MAX;
    int f = INT_MAX + 1;    // 오버플로우
    float g = FLT_MAX;
    float h = FLT_MAX * 10; // 오버플로우

    printf("a = %d, b = %d\n", a, b);
    printf("c = %d, d = %d\n", c, d);
    printf("e = %d, f = %d\n", e, f);
    printf("g = %30.25e, h = %30.25e\n", g, h);

    return 0;
}