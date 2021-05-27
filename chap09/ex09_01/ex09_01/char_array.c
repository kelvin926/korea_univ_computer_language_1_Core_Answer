#include <stdio.h>

int main(void)
{
    char str1[10] = { 'a', 'b', 'c' };
    char str2[10] = "abc";
    char str3[] = "abc";                // str3은 크기가 4인 배열
    char str4[10] = "very long string"; // 컴파일 경고
    int size = sizeof(str1) / sizeof(str1[0]);
    int i;

    printf("str1 = ");
    for (i = 0; i < size; i++)
        printf("%c", str1[i]);      // 배열처럼 for문으로 출력할 수 있다.
    printf("\n");

    printf("str2 = %s\n", str2);    // 문자열을 %s로 출력한다.

    printf("str3 = ");
    printf(str3);   // 문자 배열을 직접 printf 함수의 인자로 전달할 수 있다.
    printf("\n");

    printf("str4 = %s\n", str4);

    return 0;
}