#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int ch;

    fp = fopen("fgetc_test.c", "r");    // ������Ʈ ���͸��� �ҽ� ���ϸ�
    if (fp == NULL)
    {
        printf("���� ���� ����\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)     // ���Ͽ��� ���� �ϳ��� �д´�
    {
        fputc(ch, stdout);              // ǥ�� ��� ��Ʈ������ ���� �ϳ��� ����Ѵ�.
    }
    fclose(fp);

    return 0;
}