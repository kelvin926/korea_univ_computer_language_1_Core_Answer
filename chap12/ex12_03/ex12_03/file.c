#include <stdio.h>

int main(void)
{
    FILE *fout = NULL;  // ��¿� ���� ������
    FILE *fin = NULL;   // �Է¿� ���� ������

    fout = fopen("a.txt", "w");     // ��¿� ������ ����.
    if (fout == NULL)
    {
        printf("���� ���� ����\n");
        return 1;
    }
    fclose(fout);                   // ��¿� ������ �ݴ´�.

    fin = fopen("a.txt", "r");      // �Է¿� ������ ����.
    if (fin == NULL)
    {
        printf("���� ���� ����\n");
    }
    printf("���� ���� ����\n");
    fclose(fin);                    // �Է¿� ������ �ݴ´�.

    return 0;
}