#include <stdio.h>

int main(void)
{
    int menu;                       // ���õ� �޴� ��ȣ
    char filename[32] = "test.avi"; // ����Ʈ�� ����� ���� �̸�

    printf("1.���� ����\n");        // �޴��� ����Ѵ�.
    printf("2.���\n");
    printf("3.��� �ɼ�\n");
    printf("����: ");

    scanf("%d", &menu);             // �޴� ��ȣ�� �Է¹޴´�.
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
    default:                        // 1~3�̿��� �޴� ��ȣ ���� ��
        printf("�߸� �����ϼ̽��ϴ�.\n");
        break;
    }

    return 0;
}