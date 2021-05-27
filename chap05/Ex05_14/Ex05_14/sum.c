#include <stdio.h>

int main(void)
{
    int num = 0;    
    int sum = 0;  
    int i = 0;      // for의 초기식

    printf("정수 5개를 입력하세요: ");
    while (i < 5)   // 조건식
    {
        // 반복할 문장
        scanf("%d", &num);     
        sum += num;
        i++;    // for의 증감식
    }
    printf("합계: %d\n", sum);

    return 0;
}