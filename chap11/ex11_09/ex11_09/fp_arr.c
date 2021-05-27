#include <stdio.h>

void open_file(void)
{
    printf("������ �����մϴ�....\n");
}

void save_file(void)
{
    printf("������ �����մϴ�....\n");
}

void options(void)
{
    printf("�ɼ��� �����մϴ�....\n");
}

void print_file(void)
{
    printf("������ �μ��մϴ�....\n");
}

typedef void(*PFUNC)(void);     // �Լ� ��������

int main(void)
{
    // �Լ��� �ּҷ� �Լ� ������ �迭�� �ʱ�ȭ�Ѵ�.
    // �޴� ��ȣ�� �޴��� �������� �� ȣ���� �Լ��� �ε����� ���ƾ� �Ѵ�.
    PFUNC pf_arr[] = { open_file, save_file, options, print_file };
    //void(*pf_arr[])(void) = { 
    //    open_file, save_file, options, print_file 
    //};

    const char *menu_str[] = {  // �޴� ��¿� ����� ���ڿ� ������ �迭
        "���� ����", "���� ����", "�ɼ�", "�μ�", "����" 
    };
    enum {OPEN_FILE, CLOSE_FILE, OPTIONS, PRINT, QUIT};   // ���� ���
    int size = sizeof(pf_arr) / sizeof(pf_arr[0]);

    while (1)
    {
        int i;
        int selected = 0;
        for (i = 0; i < size + 1; i++)   // ���� �޴����� ����ؾ� �Ѵ�.
            printf("%d. %s\n", i, menu_str[i]);
        printf("����? ");
        scanf("%d", &selected);
        if (selected == QUIT)
            break;
        if (selected >= 0 && selected < size) {
            // ���õ� �޴� ��ȣ�� �Լ� ������ �迭�� �ε����� ����Ѵ�.
            pf_arr[selected]();
        }
        else {
            printf("�߸� �����ϼ̽��ϴ�.\n");
        }
    }
    return 0;
}