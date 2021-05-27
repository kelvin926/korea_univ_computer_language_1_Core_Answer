#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int ch;

    fp = fopen("a.txt", "w");           // 출력용 파일을 연다.
    if (fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    while ((ch = fgetc(stdin)) != EOF)  // 표준 입력에서 한 문자를 읽는다.
    {
        fputc(ch, fp);                  // 읽은 문자를 파일로 저장한다.
    }
    fclose(fp);

    return 0;
}