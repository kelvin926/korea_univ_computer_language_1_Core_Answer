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
    CONTACT arr[] = {    // 초기화된 배열
        {"김석진", "01011112222", 0},
        {"전정국", "01012345678", 1},
        {"박지민", "01077778888", 2},
        {"김남준", "01098765432", 9},
        {"민윤기", "01011335577", 5},
        {"정호석", "01024682468", 7},
        {"김태형", "01099991111", 3}
    };
    int size = sizeof(arr) / sizeof(arr[0]);  // 배열의 크기

    puts("<< 정렬 전 >>");
    print_contacts(arr, size);

    puts("<< 이름 순 정렬 >>");
    qsort(arr, size, sizeof(CONTACT), compare_by_name);
    print_contacts(arr, size);

    return 0;
}

// 이름 순 정렬
int compare_by_name(const void *e1, const void *e2)
{
    // e1, e2는 CONTACT의 주소이므로 const CONTACT*형으로 형 변환해서 사용한다.
    const CONTACT *p1 = (const CONTACT*)e1;
    const CONTACT *p2 = (const CONTACT*)e2;

    return strcmp(p1->name, p2->name);
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