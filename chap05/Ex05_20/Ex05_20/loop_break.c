#include <stdio.h>

int main(void)
{
    int menu;
    char filename[32] = "test.avi";

    while (1)
    {
        printf("0.����\n");
        printf("1.���� ����\n");
        printf("2.���\n");
        printf("3.��� �ɼ�\n");
        printf("����: ");

        scanf("%d", &menu);
        if (menu == 0)  // menu�� �Է¹��� ���� ���� Ż�� ������ �˻��Ѵ�.
            break;

        switch (menu) {
        case 1:
            printf("����� ���� �̸�? ");
            scanf("%s", filename);
            break;
        case 2:
            printf("%s�� ����մϴ�.\n", filename);
            break;
        case 3:
            printf("��� �ɼ��� �����մϴ�.\n");
            break;
        default:
            printf("�߸� �����ϼ̽��ϴ�.\n");
            break;
        }
    }
    printf("���α׷��� �����մϴ�.\n");

    return 0;
}