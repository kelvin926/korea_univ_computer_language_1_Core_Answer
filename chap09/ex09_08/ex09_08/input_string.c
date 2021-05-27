#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char in_str[128];
    char out_str[128];
    int hour = 12, min = 30, sec = 45;

    printf("문자열? ");
    gets_s(in_str, sizeof(in_str)); // 빈칸을 포함한 문자열 입력
    puts(in_str);                   // 문자열과 줄바꿈 문자를 함께 출력한다.
    sprintf(out_str, "%02d:%02d:%02d", hour, min, sec); // 시간 문자열을 만든다.
    puts(out_str);                  
    return 0;
}