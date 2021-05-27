#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;

    fp = fopen("a.txt", "r");   // "a.txt"가 없으므로 파일 열기 실패
    if (fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;               // 파일 열기 실패 시 프로그램을 종료한다.
    }
    printf("파일 열기 성공\n");
    fclose(fp);

    return 0;
}