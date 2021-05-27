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

        printf("\n1.연락처 추가   2.전화 걸기   0.종료\n");
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
            return i; // 찾은 항목의 인덱스 리턴
    }
    return -1;  // 탐색 실패시 -1 리턴
}

void print_contacts(const CONTACT *arr, int size)
{
    int i;

    printf(" 이름   전화번호   벨\n");
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
        printf("파일 열기 실패\n");
        return 0;
    }
    int cnt = fread(&cnt_contacts, sizeof(cnt_contacts), 1, fp);
    if (cnt < 1)
    {
        printf("파일 읽기 에러\n");
        fclose(fp);
        return 0;
    }
    arr = (CONTACT*)malloc(sizeof(CONTACT) * cnt_contacts);
    cnt = fread(arr, sizeof(arr[0]), cnt_contacts, fp);
    if (cnt < cnt_contacts)
    {
        printf("파일 읽기 에러\n");
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
        printf("파일 열기 실패\n");
        return 0;
    }
    int cnt = fwrite(&cnt_contacts, sizeof(cnt_contacts), 1, fp);
    if (cnt < 1)
    {
        printf("파일 쓰기 에러\n");
        fclose(fp);
        return 0;
    }
    cnt = fwrite(arr, sizeof(arr[0]), cnt_contacts, fp);
    if (cnt < cnt_contacts)
    {
        printf("파일 쓰기 에러\n");
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

    printf("이름(. 입력 시 종료)? ");
    scanf("%s", name);

    index = search_contacts(arr, cnt_contacts, name);
    if (index >= 0) // 탐색 성공
    {
        printf("%s의 전화번호 %s로 전화를 겁니다....\n",
            arr[index].name, arr[index].phone);
    }
    else
    {
        printf("연락처를 찾을 수 없습니다.\n");
    }
}

int add_contact(void)
{
    printf("이름? ");
    scanf("%s", arr[cnt_contacts].name);
    //gets_s(arr[cnt_contacts].name, STR_SIZE);
    if (strlen(arr[cnt_contacts].name) == 0)
        return 0;
    printf("전화번호? ");
    scanf("%s", arr[cnt_contacts].phone);
    //gets_s(arr[cnt_contacts].phone, STR_SIZE);
    if (strlen(arr[cnt_contacts].phone) == 0)
        return 0;
    arr[cnt_contacts].ringtone = 0;
    cnt_contacts++;
    return 1;
}
