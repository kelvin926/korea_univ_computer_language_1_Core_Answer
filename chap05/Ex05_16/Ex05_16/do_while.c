#include <stdio.h>

int main(void)
{
    int i = 0;
    do
        printf("%d ", i++); // 반복할 문장
    while (i < 10);         // i가 10이 되면 루프 탈출
    printf("\n");

    return 0;
}
