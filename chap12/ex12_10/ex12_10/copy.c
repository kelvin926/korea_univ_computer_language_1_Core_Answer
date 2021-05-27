#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned char buff[BUFSIZ];     // ����Ʈ ������
    char in_file[128] = "";
    char out_file[128] = "backup";
    FILE *fout = NULL;
    FILE *fin = NULL;
    int cnt_read = 0;

    printf("������ ���� �̸�? ");
    gets_s(in_file, sizeof(in_file));
    // ��¿� ���ϸ��� backup.Ȯ���� (Ȯ���ڴ� �Է¿� ���ϸ��� �����´�.)
    strcat(out_file, strchr(in_file, '.'));  
    fin = fopen(in_file, "rb");     // �Է¿� 2�� ������ ����.
    if (fin == NULL)
        goto cleanup;
    fout = fopen(out_file, "wb");   // ��¿� 2�� ������ ����.
    if (fout == NULL)
        goto cleanup;
    while ((cnt_read = fread(buff, 1, sizeof(buff), fin)) > 0)
    {
        int cnt_written = fwrite(buff, 1, cnt_read, fout);
        if (cnt_written < cnt_read)
            goto cleanup;
    }
cleanup:   // ����� ���� ó��/���� ó�� �ڵ带 ��Ƶд�.
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