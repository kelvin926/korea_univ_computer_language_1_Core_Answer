#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>     // ���ڿ� ó�� ���̺귯��
#include <ctype.h>      // ���� ó�� ���̺귯��
int count_space(const char* s);

int main(void)
{
    char str[64] = "this program\ttests const pointer to string\n";

    puts(str);
    printf("���� ������ ����: %d\n", count_space(str));
    return 0;
}

int count_space(const char* s)  // s�� �Է� �Ű�����
{
    int count = 0;
    while (s[0] != '\0') {      // while (*s != '\0') �� ���� �ǹ�
        if (isspace(s[0]))      // *s�� ���� �������� �˻��Ѵ�.
            count++;
        s++;                    // s�� ���� ���ڸ� ����Ų��.
    }

    //s[0] = 'A';       // s�� ����Ű�� ���ڿ��� ������ �� �����Ƿ� ������ ����
    //strcpy(s, "xyz"); // strcpy�� �Ű������� ���������� �ٸ��Ƿ� ������ ���
    return count;
}