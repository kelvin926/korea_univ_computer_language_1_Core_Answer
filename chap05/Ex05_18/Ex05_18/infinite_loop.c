#include <stdio.h>

int main(void)
{
    int menu;   
    char filename[32] = "test.avi";

    while (1)    // ���� �����̹Ƿ� Ctrl+C�� ���� �����ؾ� �Ѵ�.
    {
        printf("1.���� ����\n"); 
        printf("2.���\n");
        printf("3.��� �ɼ�\n");
        printf("����: ");

        scanf("%d", &menu);
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

    return 0;
}