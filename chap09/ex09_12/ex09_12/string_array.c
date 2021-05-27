#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char books[5][30] = {
        "wonder",               // books[0]의 초기값
        "me before you",        // books[1]의 초기값
        "the hunger games",     // books[2]의 초기값
        "twilight",             // books[3]의 초기값
        "harry potter",         // books[4]의 초기값
    };
    int i = 0;

    for (i = 0; i < 5; i++)
        printf("책 제목: %s\n", books[i]); // i번째 문자열 출력

    for (i = 0; i < 5; i++)
    {
        if (islower(books[i][0]))   // i번째 문자열의 0번째 문자 검사
            books[i][0] = toupper(books[i][0]); 
    }

    puts("<< 변경 후 >>");
    for (i = 0; i < 5; i++)
        printf("책 제목: %s\n", books[i]);

    return 0;
}