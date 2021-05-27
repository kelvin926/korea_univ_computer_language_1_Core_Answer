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
    CONTACT *arr[MAX] = { NULL };   // 구조체 포인터 배열
    int cnt = 0;                    // 등록된 연락처의 개수
    int i;

    // 연락처 등록
    while (cnt < MAX)
    {
        char str[STR_SIZE] = "";
        printf("연락처를 등록합니다. 이름(.입력시 등록 종료)? ");
        scanf("%s", str);
        if (strcmp(str, ".") == 0)
            break;
        // 동적으로 생성된 CONTACT 주소를 arr[cnt]에 저장한다.
        arr[cnt] = (CONTACT*)malloc(sizeof(CONTACT));
        strcpy(arr[cnt]->name, str);    // arr[cnt]는 CONTACT 포인터
        printf("전화번호? ");
        scanf("%s", arr[cnt]->phone);
        arr[cnt]->ringtone = 0; // 벨 소리는 디폴트로 0으로 지정한다.
        cnt++;
    }

    printf(" 이름   전화번호   벨\n");
    for (i = 0; i < cnt; i++)   // arr[i]는 CONTACT 포인터
    {   
        printf("%6s %11s %d\n", arr[i]->name, arr[i]->phone, arr[i]->ringtone);
    }

    for (i = 0; i < cnt; i++)   // 동적 메모리를 해제한다.
    {
        free(arr[i]);
        arr[i] = NULL;          // 해제된 메모리를 가리키는 포인터를 NULL로 만든다.
    }

    return 0;
}