#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[BUFSIZ];
    char filename[128] = "";
    FILE *fp = NULL;

    printf("파일 이름 ? ");
    gets_s(filename, sizeof(filename));
    fp = fopen(filename, "r");
    if (fp == NULL)     // 입력용 파일이 없으므로 파일 열기 실패
    {   // __FILE__, __LINE__ 매크로로 에러 정보를 출력한다.
        printf("에러 발생 : %s 파일 %d번째 줄\n", __FILE__, __LINE__);
        return 1;
    }
    while (fgets(buff, sizeof(buff), fp) != 0)
    {
        fputs(buff, stdout);
    }
    fclose(fp);

    return 0;
}