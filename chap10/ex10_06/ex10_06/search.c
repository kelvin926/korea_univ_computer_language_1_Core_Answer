#include <stdio.h>
#include <string.h>
#define STR_SIZE 20    // 문자열의 길이

typedef struct contact   
{
    char name[STR_SIZE];  
    char phone[STR_SIZE]; 
    int ringtone;
} CONTACT;

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
    int i;
    char name[STR_SIZE];   // 입력받은 이름을 저장할 문자 배열
    int index;
    
    printf("이름? ");
    scanf("%s", name);

    index = -1;             // 이름을 찾을 수 없으면 -1
    for (i = 0; i < size; i++)
    {
        if (strcmp(arr[i].name, name) == 0)  // 문자열 비교
        {
            index = i;
            break;
        }
    }
    if (index >= 0) // 검색 성공
    {
        printf("%s의 전화번호: %s\n", arr[index].name, arr[index].phone);
    }
    else            // 검색 실패
    {
        printf("연락처를 찾을 수 없습니다.\n");
    }
        
    return 0;
}