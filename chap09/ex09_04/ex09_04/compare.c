#define _CRT_SECURE_NO_WARNINGS // ���̺귯�� ��� �տ� �����Ѵ�.
#include <stdio.h>
#include <string.h>             // ���ڿ� ó�� �Լ� ��� �� ����
#define SIZE 10

int main(void)
{
    char s1[SIZE] = "apple";
    char s2[SIZE] = "apple";
    char password[SIZE];

    if (s1 == s2)               // s1�� s2�� �ּҸ� ���ϸ� �ȵȴ�.
        printf("same address\n");

    if (strcmp(s1, s2) == 0)    // s1�� s2�� ������ ���Ѵ�.
        printf("same string\n");

    printf("�н�����? ");
    scanf("%s", password);                  // �н����带 �Է� �޴´�.
    if (strcmp(password, "abcd1234") == 0)  // ��ϵ� �н������ ���Ѵ�.
        printf("login succeeded\n");
    else
        printf("login failed\n");

    return 0;
}