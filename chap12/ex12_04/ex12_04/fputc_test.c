#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int ch;

    fp = fopen("a.txt", "w");           // ��¿� ������ ����.
    if (fp == NULL)
    {
        printf("���� ���� ����\n");
        return 1;
    }
    while ((ch = fgetc(stdin)) != EOF)  // ǥ�� �Է¿��� �� ���ڸ� �д´�.
    {
        fputc(ch, fp);                  // ���� ���ڸ� ���Ϸ� �����Ѵ�.
    }
    fclose(fp);

    return 0;
}