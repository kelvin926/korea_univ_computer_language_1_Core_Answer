#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str_menu[] = {  // str_menu�� ���Ұ� 5���� ������ �迭
        "������",
        "�� ������Ʈ", 
        "������Ʈ ����",
        "�ַ�� ����",
        "����� ����"
    };
    int sz_menu = sizeof(str_menu) / sizeof(str_menu[0]);
    int menu;

    while (1)
    {
        int i;
        for (i = 0; i < sz_menu; i++)
            printf("%d.%s\n", i, str_menu[i]);

        printf("�޴� ����? ");
        scanf("%d", &menu);
        if (menu == 0)  // menu�� �Է¹��� ���� ���� Ż�� ������ �˻��Ѵ�.
            break;
        else if (menu > 0 && menu < sz_menu)
            printf("%s �޴��� �����߽��ϴ�.\n\n", str_menu[menu]);
        else
            printf("�߸� �����߽��ϴ�.\n\n");
    }

    return 0;
}