#include <stdio.h>

int main(void)
{
    int items = 0;          // ��ü �׸� ��
    int pages = 0;
    int items_per_page = 0; // �� ������ �� �׸� ��

    printf("�׸��? ");
    scanf("%d", &items);

    printf("�� ������ �� �׸��? ");
    scanf("%d", &items_per_page);

    pages = items / items_per_page; // ������ ��
    items %= items_per_page;        // ���� �׸� ���� �ٽ� items�� ����
    printf("%d �������� %d �׸�\n", pages, items);

    return 0;
}
