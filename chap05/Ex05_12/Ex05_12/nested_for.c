#include <stdio.h>

int main(void)
{
    int width, height;
    char ch;
    int i, j;

    printf("직사각형의 폭과 높이? ");
    scanf("%d %d", &width, &height);
    printf("직사각형을 그릴 문자? ");
    scanf(" %c", &ch);              // %c앞에 빈칸 지정

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++) // 중첩된 for
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}