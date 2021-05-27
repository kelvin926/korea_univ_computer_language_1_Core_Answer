#include <stdio.h>

// 구조체의 정의는 보통 함수 밖에 써준다.
struct contact      // 연락처
{
    char name[20];  // 이름
    char phone[20]; // 전화번호(01012345678 형식의 문자열로 저장)
    int ringtone;   // 벨 소리(0~9 선택)
};

int main(void)
{
    printf("contact 구조체의 크기 = %d\n", sizeof(struct contact));
    //printf("contact 구조체의 크기 = %d\n", sizeof(contact));// 컴파일 에러

    return 0;
}

void test()
{
    struct contact c1;   // 여러 함수에서 구조체를 사용할 수 있다.
}