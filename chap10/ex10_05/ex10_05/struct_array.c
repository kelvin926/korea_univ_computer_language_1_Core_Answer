#include <stdio.h>
#include <string.h>

typedef struct contact  
{
    char name[20];  
    char phone[20]; 
    int ringtone;   
} CONTACT;

int main(void)
{
    CONTACT arr[] = {   // �迭�� ũ�⸦ ������ �� �ִ�.
        {"�輮��", "01011112222", 0},
        {"������", "01012345678", 1},
        {"������", "01077778888", 2}
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf(" �̸�   ��ȭ��ȣ   ��\n");
    for (i = 0; i < size; i++)
    {
        printf("%6s %11s %d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
    }
    return 0;
}