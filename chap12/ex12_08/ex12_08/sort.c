#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ARR_SIZE 20
int compare_int(const void *e1, const void *e2);
void print_array(const int arr[], int size, FILE *fp);    // �迭 ���Ҹ� ����ϴ� �Լ�

int main(void)
{
    int arr[ARR_SIZE];
    int i;
    char filename[128] = "";
    FILE *fp = NULL;

    srand((unsigned int)time(NULL));
    // �迭�� 0~99 ������ ������ ������ ä���.
    for (i = 0; i < ARR_SIZE; i++)
        arr[i] = rand() % 100;

    printf("���� �̸�? ");
    gets_s(filename, sizeof(filename));
    if (strcmp(filename, ".") == 0)
        fp = stdout;        // ���� �̸��� "."�̸� ǥ�� ��¿� ����Ѵ�.
    else
    {
        fp = fopen(filename, "w");
        if (fp == NULL)
            fp = stdout;    // ���� ���� ���и� ǥ�� ��¿� ����Ѵ�.
    }

    fputs("���� ��: ", fp);
    print_array(arr, ARR_SIZE, fp);

    qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);
    fputs("���� ��: ", fp);
    print_array(arr, ARR_SIZE, fp);

    fclose(fp);
    return 0;
}

int compare_int(const void *e1, const void *e2)
{
    const int *p1 = (const int*)e1;
    const int *p2 = (const int*)e2;
    return (*p1 - *p2);
}

void print_array(const int arr[], int size, FILE *fp)
{
    int  i;
    for (i = 0; i < size; i++)
        fprintf(fp, "%2d ", arr[i]);
    fprintf(fp, "\n");
}