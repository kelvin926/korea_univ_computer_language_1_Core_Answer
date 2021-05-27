#include <stdio.h>

int main(void)
{
    char ch, prev_ch, next_ch;

    printf("문자? ");
    scanf("%c", &ch);   // 문자 입력

    prev_ch = ch - 1;   // ch 이전 문자
    next_ch = ch + 1;   // ch 다음 문자
    printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch);
    printf("ch      = %c, %d, %#02x\n", ch, ch, ch);
    printf("next_ch = %c, %d, %#02x\n", next_ch, next_ch, next_ch);
    
    return 0;
}