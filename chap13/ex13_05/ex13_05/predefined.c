#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[BUFSIZ];
    char filename[128] = "";
    FILE *fp = NULL;

    printf("���� �̸� ? ");
    gets_s(filename, sizeof(filename));
    fp = fopen(filename, "r");
    if (fp == NULL)     // �Է¿� ������ �����Ƿ� ���� ���� ����
    {   // __FILE__, __LINE__ ��ũ�η� ���� ������ ����Ѵ�.
        printf("���� �߻� : %s ���� %d��° ��\n", __FILE__, __LINE__);
        return 1;
    }
    while (fgets(buff, sizeof(buff), fp) != 0)
    {
        fputs(buff, stdout);
    }
    fclose(fp);

    return 0;
}