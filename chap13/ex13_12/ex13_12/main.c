#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    unsigned char buff[BUFSIZ];
    FILE *fout = NULL;
    FILE *fin = NULL;
    int cnt_read = 0;

    if (argc < 2)       // 명령행 인자의 개수가 충분한지 확인한다.
    {
        printf("usage: ex13_12 in_filename out_filename\n");
        return 1;
    }

    fin = fopen(argv[1], "rb");     // argv[1]이 소스 파일명이다.
    if (fin == NULL)
        goto cleanup;
    fout = fopen(argv[2], "wb");    // argv[2]가 타겟 파일명이다.
    if (fout == NULL)
        goto cleanup;
    while ((cnt_read = fread(buff, 1, sizeof(buff), fin)) > 0)
    {
        int cnt_written = fwrite(buff, 1, cnt_read, fout);
        if (cnt_written < cnt_read)
            goto cleanup;
    }
cleanup:
    if (fin == NULL || fout == NULL)
        printf("파일 열기 실패\n");
    else if (ferror(fin))
        printf("파일 읽기 실패\n");
    else if (ferror(fout))
        printf("파일 쓰기 실패\n");
    else
        printf("파일 복사 성공\n");
    if (fin) fclose(fin);
    if (fout) fclose(fout);

    return 0;
}