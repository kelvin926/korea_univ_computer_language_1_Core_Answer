#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;

    fp = fopen("a.txt", "r");   // "a.txt"�� �����Ƿ� ���� ���� ����
    if (fp == NULL)
    {
        printf("���� ���� ����\n");
        return 1;               // ���� ���� ���� �� ���α׷��� �����Ѵ�.
    }
    printf("���� ���� ����\n");
    fclose(fp);

    return 0;
}