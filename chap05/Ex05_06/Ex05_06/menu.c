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
    if (menu == 1) {                // ���� ���� �޴�
        printf("����� ���� �̸�? ");
        scanf("%s", filename);
    }
    else if (menu == 2) {           // ��� �޴�
        printf("%s�� ����մϴ�.\n", filename);
    }
    else if (menu == 3) {           // ��� �ɼ� �޴�
        printf("��� �ɼ��� �����մϴ�.\n");
    }
    else {                          // 1~3�̿��� �޴� ��ȣ ���� ��
        printf("�߸� �����ϼ̽��ϴ�.\n");
    }

    return 0;
}