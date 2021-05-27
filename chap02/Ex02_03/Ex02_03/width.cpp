#include <stdio.h>

int main()
{
    int num = 12345;

    printf("%d\n", num);        
    printf("%d\n", num * 10);
    printf("%d\n", num * 100);
    printf("%d\n", num * 1000);

    printf("%8d\n", num);           // 8문자 폭에 맞춰서 출력
    printf("%8d\n", num * 10);
    printf("%8d\n", num * 100);
    printf("%8d\n", num * 1000);
    printf("%8d\n", num * 100000);  // 문자 폭보다 큰 수 출력

    printf("%08d\n", num);          // 빈칸 대신 문자 폭의 남는 부분에  0 출력

    return 0;
}