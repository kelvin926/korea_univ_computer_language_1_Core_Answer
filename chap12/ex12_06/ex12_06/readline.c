#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char str[BUFSIZ];   // BUFSIZ�� ǥ�� C�� ���ǵ� ��Ʈ�� ������ ũ��

    fp = fopen("readline.c", "r");  // ������Ʈ ���͸��� �ҽ� ���ϸ�
    if (fp == NULL)
    {
        printf("���� ���� ����\n");
        return 1;
    }
    // ���Ͽ��� �� ���� ���ڿ��� �о�´�.
    while (fgets(str, sizeof(str), fp) != NULL)   
    {
        fputs(str, stdout);  // ���� ���ڿ��� ǥ�� ��� ��Ʈ���� ����Ѵ�.
    }
    fclose(fp);

    return 0;
}