#include <stdio.h>

int main(void)
{
    //int *p1 = 0x12345678;     // 컴파일 에러
    int *p2 = (int*)0x12345678; // 실행 에러가 발생할 수 있다.

    int a = 10;
    int *p3 = &a;   // a의 주소를 구해서 p를 초기화한다.

    int *p4 = 0;    // 어떤 변수의 주소로 초기화할지 알 수 없으면 0으로 초기화한다.
    int *p5 = NULL; // 0 대신 NULL을 사용해도 된다.
    
    printf("p2 = %p\n", p2);   // p2에 저장된 주소를 출력한다.
    printf("p3 = %p\n", p3);
    printf("p4 = %p\n", p4);
    printf("p4 = %p\n", p5);

    return 0;
} 