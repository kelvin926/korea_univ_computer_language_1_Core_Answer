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
    struct contact ct1 = { "������", "01012345678", 1 };
    struct contact ct2 = ct1;   // ����ü ���� �ʱ�ȭ
    
    if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0
        && ct1.ringtone == ct2.ringtone)
        printf("ct1�� ct2�� ���� �����ϴ�.\n");
    else
        printf("ct1�� ct2�� ���� �ٸ��ϴ�.\n");

    return 0;
}