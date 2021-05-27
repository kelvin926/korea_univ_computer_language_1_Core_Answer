#define _CRT_SECURE_NO_WARNINGS // 라이브러리 헤더 앞에 정의한다.
#include <stdio.h>
#include <string.h>             // 문자열 처리 함수 사용 시 포함
#define SIZE 10

int main(void)
{
    char s1[SIZE] = "apple";
    char s2[SIZE] = "apple";
    char password[SIZE];

    if (s1 == s2)               // s1과 s2의 주소를 비교하면 안된다.
        printf("same address\n");

    if (strcmp(s1, s2) == 0)    // s1과 s2의 내용을 비교한다.
        printf("same string\n");

    printf("패스워드? ");
    scanf("%s", password);                  // 패스워드를 입력 받는다.
    if (strcmp(password, "abcd1234") == 0)  // 등록된 패스워드와 비교한다.
        printf("login succeeded\n");
    else
        printf("login failed\n");

    return 0;
}