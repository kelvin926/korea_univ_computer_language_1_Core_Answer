#include <stdio.h>
#include <string.h>

struct contact      // ����ó
{
    char name[20];  // �̸�
    char phone[20]; // ��ȭ��ȣ(01012345678 ������ ���ڿ��� ����)
    int ringtone;   // �� �Ҹ�(0~9 ����)
};

int main(void)
{
    struct contact ct = { "�輮��", "01011112222", 0 };
    struct contact ct1 = { "������", "01012345678", 1 };
    struct contact ct2 = ct1;   // ����ü ������ �ʱ�ȭ�� �� �ִ�.
    printf("ct1���� �ʱ�ȭ ���� ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

    ct2 = ct;                   // ����ü ������ ������ �� �ִ�.
    printf("ct�� ������ ���� ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

    return 0;
}