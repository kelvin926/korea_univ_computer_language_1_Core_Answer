#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>      // ���� ó�� ���̺귯�� ���

int main(void)
{
    char str[64] = "";
    char *p = str;              // p�� str �迭�� ����Ų��.

    strcpy(p, "test string");   // p�� ����Ű�� ���� �迭�� �����Ѵ�.

    if (islower(p[0]))          // p[0]�� �ҹ������� �˻��Ѵ�.
        p[0] = toupper(p[0]);   // p�� ����Ű�� str[0]�� �����Ѵ�.

    p = strchr(p, ' '); // str�� ' ' ������ �ּҸ� ������ p�� �����Ѵ�.
    // ' ' ���� ���ڸ� �빮�ڷ� �ٲ۴�.
    if (islower(p[1]))
        p[1] = toupper(p[1]);
    puts(str);
    return 0;
}