#include <stdio.h>

void print_sum(int count)
{
    int i;
    int num;        // 입력받을 정수를 저장할 변수
    int sum = 0;    // 합계를 저장할 변수

    printf("%d개의 정수? ", count);
    for (i = 0; i < count; i++) // 정수를 count개 입력 받아 합계를 구한다.
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("합계 : %d\n", sum);
}

int main(void)
{
    int i;

    for (i = 3; i < 10; i += 2)
    {
        print_sum(i);    // 반복문 안에서 함수를 호출할 수 있다.
    }

    return 0;
}