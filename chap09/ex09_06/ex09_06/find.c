#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[] = "readme.txt";
    char *p = NULL;

    p = strchr(filename, '.');      // filename에서 '.' 문자를 찾아 그 주소를 받아온다.
    if (p != NULL)
        printf("file extension: %s\n", p + 1);

    p = strstr(filename, ".txt");   // filename에서 ".txt" 문자열을 찾아 그 주소를 받아온다.
    if (p != NULL)
        printf("file type: TEXT file\n");

    return 0;
}