#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[] = "readme.txt";
    char *p = NULL;

    p = strchr(filename, '.');      // filename���� '.' ���ڸ� ã�� �� �ּҸ� �޾ƿ´�.
    if (p != NULL)
        printf("file extension: %s\n", p + 1);

    p = strstr(filename, ".txt");   // filename���� ".txt" ���ڿ��� ã�� �� �ּҸ� �޾ƿ´�.
    if (p != NULL)
        printf("file type: TEXT file\n");

    return 0;
}