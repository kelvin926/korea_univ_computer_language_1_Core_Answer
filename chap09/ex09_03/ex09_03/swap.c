#define _CRT_SECURE_NO_WARNINGS // ���̺귯�� ��� �տ� �����Ѵ�.
#include <stdio.h>
#include <string.h>             // ���ڿ� ó�� �Լ� ��� �� ����
#define SIZE 32

int main(void)
{
    char str1[SIZE] = ""; // �� ���ڿ��� �ʱ�ȭ�Ѵ�.
    char str2[SIZE] = ""; // �� ���ڿ��� �ʱ�ȭ�Ѵ�.
    char temp[SIZE];
    
    printf("2���� ���ڿ�? ");
    scanf("%s %s", str1, str2);  // ��ĭ���� �����ؼ� ���ڿ� �Է�
    printf("str1 = %s, str2 = %s\n", str1, str2);

    // �� ���� �迭�� swap�Ѵ�.
    strcpy(temp, str1);     // str1�� temp�� �����Ѵ�.
    strcpy(str1, str2);     // str2�� str1�� �����Ѵ�.
    strcpy(str2, temp);     // temp�� str2�� �����Ѵ�.
    printf("str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}