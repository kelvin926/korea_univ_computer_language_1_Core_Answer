#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char str[BUFSIZ];   // BUFSIZ는 표준 C에 정의된 스트림 버퍼의 크기

    fp = fopen("readline.c", "r");  // 프로젝트 디렉터리의 소스 파일명
    if (fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    // 파일에서 한 줄의 문자열을 읽어온다.
    while (fgets(str, sizeof(str), fp) != NULL)   
    {
        fputs(str, stdout);  // 읽은 문자열을 표준 출력 스트림에 출력한다.
    }
    fclose(fp);

    return 0;
}