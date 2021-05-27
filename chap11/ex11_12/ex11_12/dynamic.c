#include <stdio.h>
#include <stdlib.h>

void print_array(const int arr[], int size);
int compare_int(const void *e1, const void *e2);

int main(void)
{
    int size;
    int * arr = NULL;   // ���� �޸��� �ּҸ� ������ ������ ������ �غ��Ѵ�.
    int i;

    printf("������ ����? ");
    scanf("%d", &size);
    // sizeof(int)*size����Ʈ��ŭ ���� �޸𸮸� �Ҵ��ϰ�, �� �ּҸ� arr�� �����Ѵ�.
    arr = malloc(sizeof(int) * size);
    if (arr == NULL)    // ���� �޸� �Ҵ��� �����ߴ��� Ȯ���ؾ� �Ѵ�.
    {
        printf("���� �޸� �Ҵ� ����\n");
        return -1;      // ������ ���Ḧ ��Ÿ���� ���� �ڵ�
    }

    // ���� �޸𸮸� ����Ű�� �����͵� �迭 �̸��� ��ó�� ����Ѵ�.
    printf("%d���� ������ �Է��ϼ���: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    puts("<< ���� �� >>");
    print_array(arr, size);
    qsort(arr, size, sizeof(arr[0]), compare_int);
    puts("<< ���� �� >>");
    print_array(arr, size);

    free(arr);      // ����� ������ ���� �޸𸮸� �����Ѵ�.
    arr = NULL;     // �޸� ���� �� �����͸� �� �����ͷ� �����.
    return 0;
}

void print_array(const int arr[], int size)
{
    int  i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int compare_int(const void *e1, const void *e2)
{
    // e1, e2�� int�� �ּ��̹Ƿ� const int*������ �� ��ȯ�ؼ� ����Ѵ�.
    const int *p1 = (const int*)e1;
    const int *p2 = (const int*)e2;
    return (*p1 - *p2);
}