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

int compare_by_name(const void *e1, const void *e2);
void print_contacts(const CONTACT *arr, int size);

int main(void)
{
    CONTACT arr[] = {    // �ʱ�ȭ�� �迭
        {"�輮��", "01011112222", 0},
        {"������", "01012345678", 1},
        {"������", "01077778888", 2},
        {"�賲��", "01098765432", 9},
        {"������", "01011335577", 5},
        {"��ȣ��", "01024682468", 7},
        {"������", "01099991111", 3}
    };
    int size = sizeof(arr) / sizeof(arr[0]);  // �迭�� ũ��

    puts("<< ���� �� >>");
    print_contacts(arr, size);

    puts("<< �̸� �� ���� >>");
    qsort(arr, size, sizeof(CONTACT), compare_by_name);
    print_contacts(arr, size);

    return 0;
}

// �̸� �� ����
int compare_by_name(const void *e1, const void *e2)
{
    // e1, e2�� CONTACT�� �ּ��̹Ƿ� const CONTACT*������ �� ��ȯ�ؼ� ����Ѵ�.
    const CONTACT *p1 = (const CONTACT*)e1;
    const CONTACT *p2 = (const CONTACT*)e2;

    return strcmp(p1->name, p2->name);
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