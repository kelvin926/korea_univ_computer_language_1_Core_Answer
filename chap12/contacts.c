#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STR_SIZE 20

typedef struct contact
{
    char name[STR_SIZE];
    char phone[STR_SIZE];
    int ringtone;
} CONTACT;

CONTACT *arr = NULL;
int cnt_contacts = 0;

int search_contacts(const CONTACT contacts[], int size, const char* name);
void print_contacts(const CONTACT *arr, int size);

void make_a_call(void);
int add_contact(void);
int load_contacts(void);
int save_contacts(void);


int main(void)
{
    if (!load_contacts())
        return 1;

    print_contacts(arr, cnt_contacts);

    while (1)
    {
        int menu;

        printf("\n1.����ó �߰�   2.��ȭ �ɱ�   0.����\n");
        scanf(" %d", &menu);
        if (menu == 0)
            break;
        switch (menu)
        {
        case 1:
            add_contact();
            break;
        case 2:
            make_a_call();
            break;
        default:
            continue;
        }
    }
    save_contacts();
    return 0;
}

int search_contacts(const CONTACT contacts[], int size, const char* name)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(contacts[i].name, name) == 0)
            return i; // ã�� �׸��� �ε��� ����
    }
    return -1;  // Ž�� ���н� -1 ����
}

void print_contacts(const CONTACT *arr, int size)
{
    int i;

    printf(" �̸�   ��ȭ��ȣ   ��\n");
    for (i = 0; i < size; i++)
    {
        printf("%6s %11s %d\n",
            arr[i].name, arr[i].phone, arr[i].ringtone);
    }
}

int load_contacts(void)
{
    FILE *fp = fopen("contacts.dat", "rb");
    if (fp == NULL)
    {
        printf("���� ���� ����\n");
        return 0;
    }
    int cnt = fread(&cnt_contacts, sizeof(cnt_contacts), 1, fp);
    if (cnt < 1)
    {
        printf("���� �б� ����\n");
        fclose(fp);
        return 0;
    }
    arr = (CONTACT*)malloc(sizeof(CONTACT) * cnt_contacts);
    cnt = fread(arr, sizeof(arr[0]), cnt_contacts, fp);
    if (cnt < cnt_contacts)
    {
        printf("���� �б� ����\n");
        free(arr);
        arr = NULL;
        cnt_contacts = 0;
        fclose(fp);
        return 0;
    }
    fclose(fp);
    return 1;
}

int save_contacts(void)
{
    FILE *fp = fopen("contacts.dat", "wb");
    if (fp == NULL)
    {
        printf("���� ���� ����\n");
        return 0;
    }
    int cnt = fwrite(&cnt_contacts, sizeof(cnt_contacts), 1, fp);
    if (cnt < 1)
    {
        printf("���� ���� ����\n");
        fclose(fp);
        return 0;
    }
    cnt = fwrite(arr, sizeof(arr[0]), cnt_contacts, fp);
    if (cnt < cnt_contacts)
    {
        printf("���� ���� ����\n");
        fclose(fp);
        return 0;
    }
    fclose(fp);
    free(arr);
    arr = NULL;
    return 1;
}

void make_a_call(void)
{
    char name[STR_SIZE] = "";
    int index;

    printf("�̸�(. �Է� �� ����)? ");
    scanf("%s", name);

    index = search_contacts(arr, cnt_contacts, name);
    if (index >= 0) // Ž�� ����
    {
        printf("%s�� ��ȭ��ȣ %s�� ��ȭ�� �̴ϴ�....\n",
            arr[index].name, arr[index].phone);
    }
    else
    {
        printf("����ó�� ã�� �� �����ϴ�.\n");
    }
}

int add_contact(void)
{
    printf("�̸�? ");
    scanf("%s", arr[cnt_contacts].name);
    //gets_s(arr[cnt_contacts].name, STR_SIZE);
    if (strlen(arr[cnt_contacts].name) == 0)
        return 0;
    printf("��ȭ��ȣ? ");
    scanf("%s", arr[cnt_contacts].phone);
    //gets_s(arr[cnt_contacts].phone, STR_SIZE);
    if (strlen(arr[cnt_contacts].phone) == 0)
        return 0;
    arr[cnt_contacts].ringtone = 0;
    cnt_contacts++;
    return 1;
}
