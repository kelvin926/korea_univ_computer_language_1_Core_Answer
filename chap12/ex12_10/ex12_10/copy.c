#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned char buff[BUFSIZ];     // 바이트 데이터
    char in_file[128] = "";
    char out_file[128] = "backup";
    FILE *fout = NULL;
    FILE *fin = NULL;
    int cnt_read = 0;

    printf("복사할 파일 이름? ");
    gets_s(in_file, sizeof(in_file));
    // 출력용 파일명은 backup.확장자 (확장자는 입력용 파일명에서 가져온다.)
    strcat(out_file, strchr(in_file, '.'));  
    fin = fopen(in_file, "rb");     // 입력용 2진 파일을 연다.
    if (fin == NULL)
        goto cleanup;
    fout = fopen(out_file, "wb");   // 출력용 2진 파일을 연다.
    if (fout == NULL)
        goto cleanup;
    while ((cnt_read = fread(buff, 1, sizeof(buff), fin)) > 0)
    {
        int cnt_written = fwrite(buff, 1, cnt_read, fout);
        if (cnt_written < cnt_read)
            goto cleanup;
    }
cleanup:   // 입출력 에러 처리/종료 처리 코드를 모아둔다.
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