#include <stdio.h>

int main(void)
{
    int num = 0;    // 입력받은 정수를 저장할 변수
    int sum = 0;    // 합계를 저장할 변수
    int i;          // 루프 제어 변수

    printf("정수 5개를 입력하세요: ");
    for (i = 0; i < 5; i++)    // i가 5가 되면 루프 탈출
    {
        scanf("%d", &num);      // i가 0, 1, 2, 3, 4일 때 반복 수행
        sum += num;
    }
    printf("합계: %d\n", sum);    

    return 0;
}