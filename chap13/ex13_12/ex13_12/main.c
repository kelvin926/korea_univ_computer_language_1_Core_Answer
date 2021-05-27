#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    unsigned char buff[BUFSIZ];
    FILE *fout = NULL;
    FILE *fin = NULL;
    int cnt_read = 0;

    if (argc < 2)       // ����� ������ ������ ������� Ȯ���Ѵ�.
    {
        printf("usage: ex13_12 in_filename out_filename\n");
        return 1;
    }

    fin = fopen(argv[1], "rb");     // argv[1]�� �ҽ� ���ϸ��̴�.
    if (fin == NULL)
        goto cleanup;
    fout = fopen(argv[2], "wb");    // argv[2]�� Ÿ�� ���ϸ��̴�.
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
        printf("���� ���� ����\n");
    else if (ferror(fin))
        printf("���� �б� ����\n");
    else if (ferror(fout))
        printf("���� ���� ����\n");
    else
        printf("���� ���� ����\n");
    if (fin) fclose(fin);
    if (fout) fclose(fout);

    return 0;
}