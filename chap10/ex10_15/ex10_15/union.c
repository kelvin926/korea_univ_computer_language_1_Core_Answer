#include <stdio.h>

union test {
    int i;                          // 모든 멤버가 같은 주소에 할당된다.
    char c;
    short s;
};

int main(void)
{
    union test t1 = { 0x12345678 }; // t1.i를 초기화한다.

    printf("sizeof(union test) = %d\n", sizeof(union test));

    printf("t1.i의 주소 = %p\n", &t1.i);   // 멤버들의 주소가 모두 같다.
    printf("t1.c의 주소 = %p\n", &t1.c);
    printf("t1.s의 주소 = %p\n", &t1.s);

    printf("t1.i = %x\n", t1.i);    // 12345678 출력
    printf("t1.c = %x\n", t1.c);    // 78 출력
    printf("t1.s = %x\n", t1.s);    // 5678 출력

    return 0;
}