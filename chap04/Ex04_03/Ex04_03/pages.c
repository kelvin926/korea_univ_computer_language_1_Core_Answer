#include <stdio.h>

int main(void)
{
    int items = 0;                  // ��ü �׸� ��
    int pages = 0, left = 0;
    int items_per_page = 0;         // �� ������ �� �׸� ��

    printf("�׸��? ");
    scanf("%d", &items);

    printf("�� ������ �� �׸��? ");
    scanf("%d", &items_per_page);

    pages = items / items_per_page; // ������ ��
    left = items % items_per_page;  // ���� �׸� ��
    printf("%d �������� %d �׸�\n", pages, left);

    return 0;
}