#include <stdio.h>

int main(void)
{
    FILE *fout = NULL;  // 출력용 파일 포인터
    FILE *fin = NULL;   // 입력용 파일 포인터

    fout = fopen("a.txt", "w");     // 출력용 파일을 연다.
    if (fout == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    fclose(fout);                   // 출력용 파일을 닫는다.

    fin = fopen("a.txt", "r");      // 입력용 파일을 연다.
    if (fin == NULL)
    {
        printf("파일 열기 실패\n");
    }
    printf("파일 열기 성공\n");
    fclose(fin);                    // 입력용 파일을 닫는다.

    return 0;
}