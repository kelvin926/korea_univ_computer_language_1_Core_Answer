#include <stdio.h>

int main(void)
{
    int width, height;
    char ch;
    int i, j;

    printf("���簢���� ���� ����? ");
    scanf("%d %d", &width, &height);
    printf("���簢���� �׸� ����? ");
    scanf(" %c", &ch);              // %c�տ� ��ĭ ����

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++) // ��ø�� for
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}