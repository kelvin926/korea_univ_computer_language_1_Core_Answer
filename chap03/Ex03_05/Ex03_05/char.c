#include <stdio.h>

int main(void)
{
    char ch, prev_ch, next_ch;

    printf("����? ");
    scanf("%c", &ch);   // ���� �Է�

    prev_ch = ch - 1;   // ch ���� ����
    next_ch = ch + 1;   // ch ���� ����
    printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch);
    printf("ch      = %c, %d, %#02x\n", ch, ch, ch);
    printf("next_ch = %c, %d, %#02x\n", next_ch, next_ch, next_ch);
    
    return 0;
}