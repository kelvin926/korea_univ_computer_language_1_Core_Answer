#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ARR_SIZE 20

int is_equal_array(int source[], int target[], int size);

int main(void)
{
    int arr1[ARR_SIZE];
    int arr2[ARR_SIZE];
    int i;
    char filename[128] = "";
    FILE *fout = NULL;
    FILE *fin = NULL;
    int res = 0;

    srand((unsigned int)time(NULL));

    // �迭�� 0~99 ������ ������ ������ ä���.
    for (i = 0; i < ARR_SIZE; i++)
        arr1[i] = rand() % 100;

    // 2�� ���Ϸ� arr1�� �����Ѵ�.
    printf("���� �̸�? ");
    gets_s(filename, sizeof(filename));
    fout = fopen(filename, "wb");       // ��¿� 2�� ������ ����.
    if (fout == NULL)
    {
        printf("��¿� ���� ���� ����\n");
        return 1;
    }
    // arr1 �迭�� ������ �����Ѵ�.
    fwrite(arr1, sizeof(arr1[0]), ARR_SIZE, fout);
    fclose(fout);
    fout = NULL;    // ���� �����͵� �� �̻� ������ ������ �� �����ͷ� �����.

    // 2�� ������ arr2�� �о�´�.
    fin = fopen(filename, "rb");    // �Է¿� 2�� ������ ����.
    if(fin == NULL)
    {
        printf("�Է¿� ���� ���� ����\n");
        return 1;
    }
    fread(arr2, sizeof(arr2[0]), ARR_SIZE, fin);
    fclose(fin);
    fin = NULL;

    // arr1�� arr2�� ������ ���Ѵ�.
    if (is_equal_array(arr1, arr2, ARR_SIZE))
        printf("2�� ���� ����� ����\n");
    else
        printf("2�� ���� ����� ����\n");

    return 0;
}

int is_equal_array(int source[], int target[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        if (source[i] != target[i])
            return 0;  
    return 1;
}