#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char books[5][30] = {
        "wonder",               // books[0]�� �ʱⰪ
        "me before you",        // books[1]�� �ʱⰪ
        "the hunger games",     // books[2]�� �ʱⰪ
        "twilight",             // books[3]�� �ʱⰪ
        "harry potter",         // books[4]�� �ʱⰪ
    };
    int i = 0;

    for (i = 0; i < 5; i++)
        printf("å ����: %s\n", books[i]); // i��° ���ڿ� ���

    for (i = 0; i < 5; i++)
    {
        if (islower(books[i][0]))   // i��° ���ڿ��� 0��° ���� �˻�
            books[i][0] = toupper(books[i][0]); 
    }

    puts("<< ���� �� >>");
    for (i = 0; i < 5; i++)
        printf("å ����: %s\n", books[i]);

    return 0;
}