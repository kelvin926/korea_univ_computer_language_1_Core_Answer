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
    CONTACT ct = { "김석진", "01011112222", 0 };
    CONTACT *p = &ct;   

    p->ringtone = 5;
    strcpy(p->phone, "01011112223");
    printf("이    름: %s\n", p->name);
    printf("전화번호: %s\n", p->phone);
    printf("벨 소 리: %d\n", p->ringtone);

    return 0;
}