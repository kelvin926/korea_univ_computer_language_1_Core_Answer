#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define STR_SIZE 20
#define MAX 100

typedef struct contact
{
    char name[STR_SIZE];
    char phone[STR_SIZE];
    int ringtone;
} CONTACT;

int main(void)
{
    CONTACT *arr[MAX] = { NULL };   // ����ü ������ �迭
    int cnt = 0;                    // ��ϵ� ����ó�� ����
    int i;

    // ����ó ���
    while (cnt < MAX)
    {
        char str[STR_SIZE] = "";
        printf("����ó�� ����մϴ�. �̸�(.�Է½� ��� ����)? ");
        scanf("%s", str);
        if (strcmp(str, ".") == 0)
            break;
        // �������� ������ CONTACT �ּҸ� arr[cnt]�� �����Ѵ�.
        arr[cnt] = (CONTACT*)malloc(sizeof(CONTACT));
        strcpy(arr[cnt]->name, str);    // arr[cnt]�� CONTACT ������
        printf("��ȭ��ȣ? ");
        scanf("%s", arr[cnt]->phone);
        arr[cnt]->ringtone = 0; // �� �Ҹ��� ����Ʈ�� 0���� �����Ѵ�.
        cnt++;
    }

    printf(" �̸�   ��ȭ��ȣ   ��\n");
    for (i = 0; i < cnt; i++)   // arr[i]�� CONTACT ������
    {   
        printf("%6s %11s %d\n", arr[i]->name, arr[i]->phone, arr[i]->ringtone);
    }

    for (i = 0; i < cnt; i++)   // ���� �޸𸮸� �����Ѵ�.
    {
        free(arr[i]);
        arr[i] = NULL;          // ������ �޸𸮸� ����Ű�� �����͸� NULL�� �����.
    }

    return 0;
}