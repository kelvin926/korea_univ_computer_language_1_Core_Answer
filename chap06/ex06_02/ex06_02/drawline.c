#include <stdio.h>

// ch : 선 그릴 때 사용할 문자
// len : 선을 출력할 때 필요한 문자의 개수
void draw_line(char ch, int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%c", ch);
    printf("\n");
}

int main(void)
{
    int amount = 10;
    int price = 1000;
    int total = amount * price;
    int width;          // 계산서 헤더 폭

    draw_line('-', 30); // '-'로 30개 길이만큼 선을 그린다.

    printf("수량    단가     합계\n");
    width = 3 + 8 + 8 + 2;  // 헤더 폭을 계산한다. (%3d+%8d+%8d+빈칸2개)
    draw_line('*', width);  // '*'로 width개 길이만큼 선을 그린다.
    printf("%3d %8d %8d\n", amount, price, total);

    draw_line('-', 30);     // '-'로 30개 길이만큼 선을 그린다.

    return 0;
}